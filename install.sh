sudo yum install irrlicht-devel\
&& mkdir -p build\
&& cd build\
&& cmake ../\
&& cmake --build .\
&& ([ -f ${PWD}/../bomberman ] || (ln -s ${PWD}/../bin/bomberman ${PWD}/../bomberman && echo "Shortcut created"))\
&& echo "Successfully installed! You can now run bomberman!"\