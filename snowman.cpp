# include "snowman.hpp"
# include <iostream>
# include <string>
# include <string.h>
#include <sstream>

using namespace std;
const int zero=0;
const int one=1;
const int two=2;
const int three=3;
const int four=4;
const int five=5;
const int six=6;
const int seven=7;
const int eight=8;
const int ten=10;

bool ariel::check_input(int number){
    //cout<<number<<endl;
    bool flag = true;
    int count_letters=zero;
    while(number>zero){
        int temp=number%ten;
        if(temp>four || temp<=zero){
            return false;
        }
        number=number/ten;
        count_letters=count_letters+one;
    }
    //cout<<"num of letters="<< count_letters<<endl;
    if(count_letters!=eight){
        return false;
}    
return flag;

}
string ariel::snowman(int number){
    if(!check_input(number)){
        throw exception();
    }
    string snum=to_string(number);
    string reverse="00000000";
    int k=zero;
    for (int i = eight-one; i >=zero ; --i) {
        reverse.at(k)=snum.at(i);
        k++;
    }
    k=zero;
    stringstream geek(reverse);
    geek>>number;
    string answer;
    int index_hate=zero;
    int indexBody=zero;
    int indexLeftEye=zero;
    int aftereye=zero;
    int index_beforBody=zero;
    string sleftArm;
    string srightArm;
    string supright;
    string snose;
    bool leftArm= false;
    bool rightArm= false;
    bool uprightArm= false;


    for(int i=1;i<=eight;i++){
        int temp=number%ten;
        bool left_eye= false;
        switch(i) {
            case one  :
                switch(temp){
                    case one:
                        answer+="_===_";
                        index_hate=answer.size();
                        break;
                    case two:
                        answer+=" ___ \n"
                                ".....";
                        index_hate=answer.size();
                        break;
                    case three:
                        answer+="  _  \n"
                                " /_\\";
                        index_hate=answer.size();
                        break;
                    case four:
                        answer+="___ \n"
                               "(_*_)";
                        index_hate=answer.size();
                        break;
                }

                break;
            case two  :
                switch(temp){ //nose
                    case one:
                        snose=",";
                        break;
                    case two:
                        snose=".";
                        break;
                    case three:
                        snose="_";
                        break;
                    case four:
                        snose=" ";
                        break;
                }

                break;
            case three :// left eye
                switch(temp){

                    case one:
                        answer+="(.";
                        indexLeftEye=answer.size();
                        break;
                    case two:
                        answer+="(o";
                        indexLeftEye=answer.size();

                        break;
                    case three:
                        answer+="(O";
                        indexLeftEye=answer.size();
                        break;
                    case four:
                        answer+="(-";
                        indexLeftEye=answer.size();

                        break;
                }

                break;
            case four  :
                switch(temp){ // right eye
                    case one:
                        answer+=".)";
                        aftereye=answer.size();

                        break;
                    case two:
                        answer+="o)";
                        aftereye=answer.size();

                        break;
                    case three:
                        answer+="O)";
                        aftereye=answer.size();

                        break;
                    case four:
                        answer+="-)";
                        aftereye=answer.size();

                        break;
                }

                break;
            case five  :
                switch(temp){ //left arm
                    case one:
                        answer+="<";

                        break;
                    case two:
                        sleftArm="\\";
                        //answer+="\\";

                        break;
                    case three:
                        leftArm= true;
                        sleftArm="/";


                        //answer+="/";

                        break;
                    case four:
                        answer+="";

                        break;
                }

                break;
            case six  :
                switch(temp){ //Right Arm
                    case one:
                        srightArm=">";
                        index_beforBody=answer.size();

                        //answer+=">";

                        break;
                    case two:
                        srightArm="/";
                        uprightArm= true;
                        //answer+="/";
                        index_beforBody=answer.size();


                        break;
                    case three:
                        //rightArm= true;

                        srightArm="\\";
                        index_beforBody=answer.size();

                    case four:
                        answer+="";

                        break;
                        index_beforBody=answer.size();


                        break;
                }

                break;
            case seven  :
                switch(temp){
                    case one:
                    //    answer.insert(2,",");
                        answer+="( : )";
                        k = one;
                        indexBody=answer.size();

                        break;
                    case two:
                        answer+="(] [)";
                       // answer.insert(2,".");
                        indexBody=answer.size();
                            k=two;
                        break;
                    case three:
                        answer+="(> <)";
                       // answer.insert(2,"_");
                        indexBody=answer.size();
                        k=two;

                        break;
                    case four:
                        answer+="(  )";
                        indexBody=answer.size();
                        //k=2;

                        break;
                }

                break;
            case eight  :
                switch(temp){
                    case one:
                        answer+="( : )";

                        break;
                    case two:
                        answer+="(\" \")";

                        break;
                    case three:
                        answer+="(___)";

                        break;
                    case four:
                        answer+="(   )";

                        break;
                }

                break;


            default :
                cout<<"none"<<endl;
        }

        number=number/ten;
    }

    answer.insert(indexLeftEye, snose);


    if(leftArm){
        answer.insert(index_beforBody+one, sleftArm);
    }else{
        answer.insert(index_hate, sleftArm);

    }
    if(uprightArm){
        answer.insert(aftereye+k, srightArm);

    }else {
        answer.insert(indexBody+k, srightArm);

    }
     //answer.insert(indexBody, srightArm);

    //  cout<<"sdsdsd: "<<srightArm<<endl;
    //answer.insert(indexBody, srightArm);




    return answer;
}
