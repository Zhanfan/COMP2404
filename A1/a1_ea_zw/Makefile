OBJ = main.o RecipeManager.o UImanager.o Array.o Recipe.o

a1:	$(OBJ)
	g++ -o a1 $(OBJ)

main.o:	main.cc
	g++ -c main.cc

RecipeManager.o:	RecipeManager.cc RecipeManager.h 
	g++ -c RecipeManager.cc

UImanager.o:	UImanager.cc UImanager.h 
	g++ -c UImanager.cc

Array.o:	Array.cc Array.h
	g++ -c Array.cc

Recipe.o:	Recipe.cc Recipe.h defs.h
	g++ -c Recipe.cc

clean:
	rm -f *.o a1

