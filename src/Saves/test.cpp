#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>


// archives Boost
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>

class testSubObj {
    public:
        float a;
        float b;
        float c;
        testSubObj() {
            a = 3;
            b = 4;
            c = 5;
        }
    private:
        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive &ar, const unsigned int version) {
            ar & a & b & c;
        }
};

class test {
    public:

        test() {
            a = 1;
            b = 2;
            c = 3;
        }
        const testSubObj getT() {return (t);}
        void setA(const int _a) {a = _a;}
        void printA() {std::cout << a << std::endl;}
    private:
        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive &ar, const unsigned int version) {
            ar & a & b & c & t;
        }
        int a;
        int b;
        int c;
        testSubObj t;
};

class testSon : public test {
    public:
        testSon() : test() {
            _g = 23;
        }
        void printG() {std::cout << _g << std::endl;}
    private:
        friend class boost::serialization::access;
        template<class Archive>
        void serialize(Archive & ar, const unsigned int version) {
            ar & boost::serialization::base_object<test>(*this);    // sérialisation de la classe mère
            ar & _g;                       // sérialisation des éléments propres à lobjet courant
        }
        int _g;
};

template <class Obj>
void serializeObject(Obj& d, const char* file){
    std::ofstream ofile(file);
    boost::archive::text_oarchive ar(ofile);

    ar << d;
    ofile.close();
}

template <class Obj>
void unserializeObject(Obj& d, const char* file){
    std::ifstream ifile(file);
    boost::archive::text_iarchive ar(ifile);

    ar >> d;
    ifile.close();
}

int main() {

    test d;
    test c;
    testSon v;
    testSon w;

    d.setA(43);
    serializeObject<test>(d, "testfile");
    d.setA(-3);
    unserializeObject<test>(c, "testfile");
    c.printA();
    std::cout << c.getT().a << std::endl;

    serializeObject<testSon>(v, "testSonfile");
    try {
        unserializeObject<testSon>(w, "testfil");
    }
    catch (boost::archive::archive_exception &except) {
        std::cerr << "lol" << std::endl;
    }
    w.printG();
    w.printA();
}
