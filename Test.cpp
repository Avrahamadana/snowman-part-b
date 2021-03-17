//#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
using namespace std;

#include <string>
#include <algorithm>
#include <iostream>


int main() {

    cout << ariel::snowman(11114411) << endl;   /* Should print:
_===_
(.,.)
( : )
( : )
	*/
   cout << ariel::snowman(33232124) << endl;   /* Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
    cout << ariel::snowman(32443333) << endl;   /* Should print:
   _
  /_\
 (-.-)
/(> <)\
 (___)
	*/
    cout << ariel::snowman(44444432) << endl;   /* Should print:
  ___
 (_*_)
 (- -)
 (> <)
 (" ")
	*/


    cout << ariel::snowman(11111111) << endl;   /* Should print:
_===_
 (.,.)
<( : )>
 ( : )
	*/

    cout << ariel::snowman(22222222) << endl;   /* Should print:
 ___
 .....
\(o.o)/
 (] [)
 (" ")
	*/
    cout << ariel::snowman(33333333) << endl;   /* Should print:_
  /_\
 (O_O)
/(> <)\
 (___)
	*/
    cout << ariel::snowman(44444444) << endl;   /* Should print:_
    ___
 (_*_)
 (- -)
 (   )
 (   )
	*/

    cout << ariel::snowman(12341214) << endl;   /* Should print:_
  _===_
 (O.-)/
<( : )
 (   )
	*/
    cout << ariel::snowman(12344321) << endl;   /* Should print:_ erore
 _===_
 (O.-)
 (] [)\
 ( : )
	*/
    cout << ariel::snowman(12333321) << endl;   /* Should print:_
  _===_
 (O.O)
/(] [)\
 ( : )
	*/
    cout << ariel::snowman(11112311) << endl;   /* Should print:_
 _===_
\(.,.)
 ( : )\
 ( : )
	*/
    cout << ariel::snowman(44114432) << endl;   /* Should print:_
   _
 (_*_)
 (. .)
 (> <)
 (" ")
	*/



    try {
       cout << ariel::snowman(5) << endl;   // Exception - not a valid code
    } catch (exception& ex) {
        cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid code '5'"
    }
}
//
//
//
//
///**
// * An example of how to write unit tests.
// * Use this as a basis to build a more complete Test.cpp file.
// *
// * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
// *
// * AUTHORS: <Please write your names here>
// *
// * Date: 2021-02
// */
//
//#include "doctest.h"
//#include "snowman.hpp"
//
//
//
//#include <iostream>
//
///**
// * Returns the input string without the whitespace characters: space, newline and tab.
// * Requires std=c++2a.
// */
//#include <algorithm>
//#include <string>
//
//using namespace ariel;
//string nospaces(string input) {
//    // std::cout<<"checkkkk"<<endl;
//    //   std::cout<<"input======"<<input<<endl;
//    input.erase(remove(input.begin(),input.end(),' '),input.end());
//    input.erase(remove(input.begin(),input.end(),'\t'),input.end());
//    input.erase(remove(input.begin(),input.end(),'\r'),input.end());
//    input.erase(remove(input.begin(),input.end(),'\n'),input.end());
//    return input;
//}
//
//
//TEST_CASE("Good snowman code") {
//            CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
//            CHECK(nospaces(snowman(12222212)) == nospaces("_===_\n\\(o.o)/\n( : )\n(\" \")"));
//            CHECK(nospaces(snowman(21114411)) == nospaces("___\n.....\n(.,.)\n( : )\n( : )"));
//            CHECK(nospaces(snowman(11114413)) == nospaces("_===_\n(.,.)\n( : )\n(___)"));
//            CHECK(nospaces(snowman(21114423)) == nospaces("___\n.....\n(.,.)\n(] [)\n(___)"));
//            CHECK(nospaces(snowman(11111131)) == nospaces("_===_\n<(.,.)>\n(> <)\n( : )"));
//            CHECK(nospaces(snowman(33232124)) == nospaces("_\n/_\\\n\\(o_O)\n(] [)>\n(   )"));
//            CHECK(nospaces(snowman(32443333)) == nospaces(" _\n"
//                                                          "  /_\\\n"
//                                                          " (-.-) \n"
//                                                          "/(> <)\\\n"
//                                                          " (___)"));
//            CHECK(nospaces(snowman(44444432)) == nospaces("___\n(_*_)\n(- -)\n(> <)\n(\" \")"));
//            CHECK(nospaces(snowman(11112311)) == nospaces("_===_\n\\(.,.)\n( : )\n( : )"));
//            CHECK(nospaces(snowman(44444444)) == nospaces("  ___  \n"
//                                                          " (_*_) \n"
//                                                          " (- -) \n"
//                                                          " (   ) \n"
//                                                          " (   )"));
//            CHECK(nospaces(snowman(242244113)) == nospaces("___\n.....\n(o o)\n( : )\n( : )"));
//            CHECK(nospaces(snowman(31333342)) == nospaces("_\n/_\\\n(O,O)\n/(   )\\\n(\" \")"));
//            CHECK(nospaces(snowman(43232122)) == nospaces("___\n(_*_)\n\\(o_O)\n(] [)>\n(\" \")"));
//            CHECK(nospaces(snowman(33333333)) == nospaces("_\n/_\\\n(O_O)\n/(> <)\\\n(___)"));
//            CHECK(nospaces(snowman(22222222)) == nospaces("___\n.....\n\\(o.o)/\n(] [)\n(\" \")"));
//            CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
//            CHECK(nospaces(snowman(44444444)) == nospaces("___\n(_*_)\n(- -)\n(   )\n(   )"));
//            CHECK(nospaces(snowman(12341214)) == nospaces("_===_\n(O.-)/\n<( : )\n(   )"));
//            CHECK(nospaces(snowman(41341144)) == nospaces("___\n(_*_)\n(O,-)\n<(   )>\n(   )"));
//
//
//}
//
//TEST_CASE("Bad snowman code") {
//            CHECK_THROWS(snowman(555));
//            CHECK_THROWS(snowman(152));
//            CHECK_THROWS(snowman(414));
//            CHECK_THROWS(snowman(00));
//            CHECK_THROWS(snowman(51341145));
//    for (int i = 5; i <15 ; ++i) {
//                CHECK_THROWS(snowman(i));
//
//    }
//
//}
