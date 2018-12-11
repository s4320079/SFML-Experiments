sfmlPath = /mnt/c/C++/SFML
test.exe: test.cpp
	g++ -g -Wall -L $(sfmlPath)/lib -I $(sfmlPath)/include -o sfml-app test.cpp -lsfml-graphics -lsfml-window -lsfml-system
clean: 
	rm -f *.o *.exe sfml-app