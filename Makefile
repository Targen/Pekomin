LDLIBS = -lm

all: pekomin

clean:
	rm -f *.gch *.o *.*~ *~ pekomin 

pekomin: pekomin.o Static.o Mobile.o Triple.o Behavior.o KinematicSeek.o KinematicFlee.o KinematicArrive.o KinematicWander.o Seek.o Flee.o Arrive.o Align.o VelocityMatch.o Pursue.o Evade.o Face.o
	g++ $(CXXOPTS) -o pekomin *.o $(LDLIBS)

Face.o: Face.cpp Face.hpp Align.hpp
	g++ $(CXXOPTS) -c Align.cpp $(LDLIBS)

Evade.o: Evade.cpp Evade.hpp Flee.hpp
	g++ $(CXXOPTS) -c Evade.cpp $(LDLIBS)

Pursue.o: Pursue.cpp Pursue.hpp Seek.hpp
	g++ $(CXXOPTS) -c Pursue.cpp $(LDLIBS)

VelocityMatch.o: VelocityMatch.cpp VelocityMatch.hpp Behavior.hpp
	g++ $(CXXOPTS) -c VelocityMatch.cpp $(LDLIBS)

Align.o: Align.cpp Align.hpp Behavior.hpp
	g++ $(CXXOPTS) -c Align.cpp $(LDLIBS)

Arrive.o: Arrive.cpp Arrive.hpp Behavior.hpp
	g++ $(CXXOPTS) -c Arrive.cpp $(LDLIBS)

Flee.o: Flee.cpp Flee.hpp Behavior.hpp
	g++ $(CXXOPTS) -c Flee.cpp $(LDLIBS)

Seek.o: Seek.cpp Seek.hpp Behavior.hpp
	g++ $(CXXOPTS) -c Seek.cpp $(LDLIBS)

KinematicWander.o: KinematicWander.cpp KinematicWander.hpp Behavior.hpp util.hpp
	g++ $(CXXOPTS) -c KinematicWander.cpp $(LDLIBS)

KinematicArrive.o: KinematicArrive.cpp KinematicArrive.hpp Behavior.hpp
	g++ $(CXXOPTS) -c KinematicArrive.cpp $(LDLIBS)

KinematicFlee.o: KinematicFlee.cpp KinematicFlee.hpp Behavior.hpp
	g++ $(CXXOPTS) -c KinematicFlee.cpp $(LDLIBS)

KinematicSeek.o: KinematicSeek.cpp KinematicSeek.hpp Behavior.hpp
	g++ $(CXXOPTS) -c KinematicSeek.cpp $(LDLIBS)

Behavior.o: Behavior.cpp Behavior.hpp Triple.hpp
	g++ $(CXXOPTS) -c Behavior.cpp $(LDLIBS)

pekomin.o: pekomin.cpp Triple.hpp
	g++ $(CXXOPTS) -c pekomin.cpp $(LDLIBS) 

Mobile.o: Mobile.cpp Mobile.hpp Triple.hpp
	g++ $(CXXOPTS) -c Mobile.cpp $(LDLIBS)

Static.o: Static.cpp Static.hpp Triple.hpp
	g++ $(CXXOPTS) -c Static.cpp $(LDLIBS)

Triple.o: Triple.cpp Triple.hpp
	g++ $(CXXOPTS) -c Triple.cpp $(LDLIBS)

