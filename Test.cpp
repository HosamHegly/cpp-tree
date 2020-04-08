#include "FamilyTree.hpp"
#include "doctest.h"
#include <iostream>
using namespace std;
using namespace family;
TEST_CASE("Test relation and add and find") {
   Tree T ("josh"); // Yosef is the "root" of the tree (the youngest person).
	T.addFather("josh", "daniel")   // Tells the tree that the father of Yosef is Yaakov.
	 .addMother("josh", "Rachel")   // Tells the tree that the mother of Yosef is Rachel.
	 .addFather("daniel", "drake")
   .addMother("daniel", "eve")
	 .addFather("Rachel","russel")
	 .addMother("Rachel","goldy")
	.addFather("drake", "carol")
	 .addMother("drake","shanon")
	 .addFather("carol","micheal")
     .addMother("carol","shere")
	 .addFather("shanon", "jack")
	 .addMother("shanon", "lara")
	 .addFather("micheal","mike")
	 .addMother("micheal","laila")
	 	 .addFather("jack", "jackal")
	 .addMother("jack", "christine")
	 	 .addFather("lara", "sam")
	 	 .addFather("mike","fred")

	 .addMother("lara", "samantha");
	 



	 
	  CHECK(T.relation("daniel")==string("father"));
	  CHECK(T.relation("Rachel")==string("mother"));
	  CHECK(T.relation("drake")==string("grandfather"));
	  CHECK(T.relation("eve")==string("grandmother"));
	  CHECK(T.relation("russel")==string("grandfather"));
  	  CHECK(T.relation("goldy")==string("grandmother"));


	  CHECK(T.relation("carol")==string("great-grandfather"));
	  CHECK(T.relation("shanon")==string("great-grandmother"));
	  CHECK(T.relation("micheal")==string("great-great-grandfather"));
	  CHECK(T.relation("shere")==string("great-great-grandmother"));
 	  CHECK(T.relation("lara")==string("great-great-grandmother"));
 	  CHECK(T.relation("jack")==string("great-great-grandfather"));
 	  CHECK(T.relation("laila")==string("great-great-great-grandmother"));
   	  CHECK(T.relation("mike")==string("great-great-great-grandfather"));

   	  CHECK(T.relation("jackal")==string("great-great-great-grandfather"));
   	  CHECK(T.relation("christine")==string("great-great-great-grandmother"));
   	  CHECK(T.relation("jackal")==string("great-great-great-grandfather"));
   	  CHECK(T.relation("sam")==string("great-great-great-grandfather"));
   	  CHECK(T.relation("samantha")==string("great-great-great-grandmother"));
   	  
   	   CHECK(T.find("father")==string("daniel"));
   	   CHECK(T.find("mother")==string("Rachel"));
   	   CHECK(T.find("grandfather")==string("drake"));
   	   CHECK(T.find("grandmother")==string("eve"));
   	   CHECK(T.find("great-grandfather")==string("carol"));
   	  CHECK(T.find("great-grandmother")==string("shanon"));
   	  	  CHECK(T.find("great-great-grandfather")==string("micheal"));
   	   CHECK(T.find("great-great-grandmother")==string("shere"));
   	   CHECK(T.find("great-great-great-grandmother")==string("laila"));
   	   CHECK(T.find("great-great-great-grandfather")==string("mike"));
   	  CHECK(T.find("great-great-great-great-grandfather")==string("fred"));
}

   	   

TEST_CASE("Test remove if removed parents all should be removed except for josh") {
    family::Tree T ("josh"); // Yosef is the "root" of the tree (the youngest person).
	T.addFather("josh", "daniel")   // Tells the tree that the father of Yosef is Yaakov.
	 .addMother("josh", "Rachel")   // Tells the tree that the mother of Yosef is Rachel.
	 .addFather("daniel", "drake")
	 .addMother("daniel", "eve")
	 .addFather("Rachel","russel")
	 .addMother("Rachel","goldy")
	 .addFather("drake", "carol")
	 .addMother("drake","shanon")
	 .addFather("carol","micheal")
     .addMother("carol","shere")
	 .addFather("shanon", "jack")
	 .addMother("shanon", "lara")
	 .addFather("micheal","mike")
	 .addMother("micheal","laila")
	 	 .addFather("jack", "jackal")
	 .addMother("jack", "christine")
	 	 .addFather("lara", "sam")
	 	 .addFather("mike","fred")

	 .addMother("lara", "samantha");
	 
	 T.remove("daniel");
	 T.remove("Rachel");

  CHECK(T.relation("daniel")==string("unrelated"));
  CHECK(T.relation("Rachel")==string("unrelated"));
   CHECK(T.relation("drake")==string("unrelated"));
     CHECK(T.relation("eve")==string("unrelated"));
  CHECK(T.relation("russel")==string("unrelated"));
  CHECK(T.relation("goldy")==string("unrelated"));
  CHECK(T.relation("carol")==string("unrelated"));
  CHECK(T.relation("shanon")==string("unrelated"));
  CHECK(T.relation("micheal")==string("unrelated"));
   CHECK(T.relation("shere")==string("unrelated"));
  CHECK(T.relation("jack")==string("unrelated"));
  CHECK(T.relation("lara")==string("unrelated"));
  CHECK(T.relation("mike")==string("unrelated"));
  CHECK(T.relation("laila")==string("unrelated"));
  CHECK(T.relation("jackal")==string("unrelated"));
 CHECK(T.relation("christine")==string("unrelated"));
 CHECK(T.relation("sam")==string("unrelated"));
 CHECK(T.relation("fred")==string("unrelated"));
      CHECK(T.relation("jackal")==string("unrelated"));

      CHECK(T.relation("samantha")==string("unrelated"));
}



























 	  
 	  








	  
