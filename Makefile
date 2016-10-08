CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: main.o view.o robot_arm.o robot_torso.o robot_head.o robot_locomotor.o
	$(CXX) $(CXXFLAGS) main.o view.o robot_arm.o robot_torso.o robot_head.o robot_locomotor.o
main.o: main.cpp view.h robot_arm.h robot_torso.h robot_head.h robot_locomotor.h
	$(CXX) $(CXXFLAGS) -w -c main.cpp
view.o: view.cpp view.h robot_arm.h robot_torso.h robot_head.h robot_locomotor.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp
robot_arm.o: robot_arm.cpp robot_arm.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_arm.cpp
robot_torso.o: robot_torso.cpp robot_torso.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_torso.cpp
robot_head.o: robot_head.cpp robot_head.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_head.cpp
robot_locomotor.o: robot_locomotor.cpp robot_locomotor.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_locomotor.cpp

clean:
	rm -f *.o a.out
