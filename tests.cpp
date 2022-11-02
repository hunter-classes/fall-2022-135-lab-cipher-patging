/*
Patrick Ging
Professor Zamanksy
Lab Cypher
tests.cpp
*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"


TEST_CASE("Testing general cases of solving caesar shift") {
    // many of these string are exerpts from wikipedia
    CHECK( solve(encryptCaesar("Hello my name is Patrick! lorem ipsum hey", 14)) == "Hello my name is Patrick! lorem ipsum hey");
    CHECK( solve(encryptCaesar("When she lived has been much debated since the early twentieth century; proposed dates range from the beginning of the fifth century to the late third century BC", 20)) ==  "When she lived has been much debated since the early twentieth century; proposed dates range from the beginning of the fifth century to the late third century BC");
    CHECK( solve(encryptCaesar("commonly known as the violet sea urchin. Its range includes the Mediterranean Sea and the eastern Atlantic Ocean, from the Channel Islands south to Cape Verde and the Gulf of Guinea", 5)) == "commonly known as the violet sea urchin. Its range includes the Mediterranean Sea and the eastern Atlantic Ocean, from the Channel Islands south to Cape Verde and the Gulf of Guinea");
    CHECK( solve(encryptCaesar("election but stopped short of contesting the election result and authorized his chief of staff, Ciro Nogueira Lima Filho, to begin the transition process with representatives of president elect Lula",10)) == "election but stopped short of contesting the election result and authorized his chief of staff, Ciro Nogueira Lima Filho, to begin the transition process with representatives of president elect Lula");
    CHECK( solve(encryptCaesar("Despite its relatively large number of supporters, the party has been involved in a number of corruption scandals since Lula first came to power and saw its popular support plummet between 2010 and 2016, with presidential",12)) == "Despite its relatively large number of supporters, the party has been involved in a number of corruption scandals since Lula first came to power and saw its popular support plummet between 2010 and 2016, with presidential");

}

