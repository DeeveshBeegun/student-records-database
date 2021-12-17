CC=g++ # the compiler
LIBS=-std=c++11

# need student_records.o to create driver executable
driver: student_records.o
	$(CC) student_records.o -o driver $(LIBS)
# need student_records.cpp and student_recorsds.h to create file student_records.o
student_records.o: student_records.cpp student_records.h
	$(CC) student_records.cpp -c 
run:
	export LD_LIBRARY_PATH=database/&& ./driver
# invoked by make clean to clean object files
clean:
	@rm -f *.o