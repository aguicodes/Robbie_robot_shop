CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: main.o view.o robot_parts.o customers.o sales_associates.o robot_models.o
	$(CXX) $(CXXFLAGS) main.o view.o robot_parts.o customers.o sales_associates.o robot_models.o
main.o: main.cpp view.h robot_parts.h customers.h sales_associates.h robot_models.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c main.cpp
robot_parts.o: robot_parts.cpp robot_parts.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_parts.cpp
customers.o: customers.cpp customers.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c customers.cpp
sales_associates.o: sales_associates.cpp sales_associates.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c sales_associates.cpp
robot_models.o: robot_models.cpp robot_models.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c robot_models.cpp
view.o: view.cpp view.h robot_parts.h customers.h sales_associates.h robot_models.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp

clean:
	rm -f *.o a.out
