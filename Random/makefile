random: PowerLaw.h PowerLaw.cc Random.cc Wrappers.h Wrappers.cc
	${GXX} -fpic -c Wrappers.cc -o Wrappers.o -std=c++11
	${GXX} -fpic -c Random.cc -o Random.o -std=c++11
	${GXX} -shared -o libRandom.so Random.o