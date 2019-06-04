sudo yum install irrlicht-devel\
&& cd build && cmake ../\
&& cmake --build .\
&& ([ -f ${PWD}/../bomberman ] || (ln -s ${PWD}/bomberman ${PWD}/../bomberman && echo "Shortcut created"))\
&& echo "Successfully installed! You can now run bomberman!"\