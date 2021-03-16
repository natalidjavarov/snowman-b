#include <string>
#include <iostream>
#include "snowman.hpp"
#include <stdexcept>
#include <array>
using namespace std;
 namespace ariel{


const int number_opt=4;
const int Upwards =2;
const int dec_base=10;
const int  digit=8;
const int min_case=11111111;
const int max_case=44444444;

 array<string, number_opt> Hat = {"\n      \n _===_ \n" , "\n  ___  \n ..... \n ", "\n   _   \n  /_\\ \n", "\n  ___  \n (_*_) \n" };
 array<string, number_opt> Nose = {",", ".", "_", " "};
 array<string, number_opt> LeftEye = {"(.", "(o", "(O", "(-"};
 array<string, number_opt> RightEye = {".)", "o)", "O)", "-)"};
 array<string, number_opt> LeftArm = {"<","\\", "/", " "};
 array<string, number_opt> RightArm = {">\n", "/\n", "\\\n", " \n"};
 array<string, number_opt> Turso = {"( : )", "(] [)","(> <)", "(   )"};
 array<string, number_opt> Base = {" ( : ) "," (\" \") ", " (___) ", " (   ) "};




    

  string snowman(int number){
      string snowman ;
     if(number<min_case || number>max_case){
          throw invalid_argument("number invalid");
     }

     
     

      int base= number%dec_base;
      if(base >4||base<1){
      throw invalid_argument("base number invalid");
      }
      number =number/dec_base;
      
      int turso= number%dec_base;
       if(turso >4||turso<1){
      throw invalid_argument("turso number invalid");
       } 
       number =number/dec_base;
     
    
int right_arm= number%dec_base;
  if(right_arm >4||right_arm<1){
      throw invalid_argument("right arm number invalid");
  }
      number =number/dec_base;
    

int left_arm= number%dec_base;
 if( left_arm>4||left_arm<1){
      throw invalid_argument("left arm number invalid");
  }
     number = number/dec_base;
     
int right_Eye= number%dec_base;
if(right_Eye >4||right_Eye<1){
      throw invalid_argument("right Eye number invalid");
  }
      number =number/dec_base;
      
int left_Eye= number%dec_base;
 if(left_Eye >4||left_Eye<1){
      throw invalid_argument("torso number invalid");
 }
      number =number/dec_base;

int nose= number%dec_base;
 if(nose >4||nose<1){
      throw invalid_argument("nose number invalid");
 }
     number = number/dec_base;
     
      int hat= number%dec_base;
      if(hat >4||hat<1){
      throw invalid_argument("hat number invalid");
  }
    
      


  snowman+= Hat.at(hat-1);
     
    if(left_arm==2){
        snowman+= LeftArm.at(left_arm-1);
    }
    else{
            snowman +=" ";
        }
      snowman +=LeftEye.at(left_Eye-1);
      snowman +=Nose.at(nose-1);
      snowman +=RightEye.at(right_Eye-1);

    if(right_arm ==2){
    snowman += RightArm.at(right_arm-1);
}
    else{
     snowman +=" \n";
 }

    if(left_arm==2){
     snowman+= " ";
 }
    else{
     snowman+=LeftArm.at(left_arm-1);
 }
    snowman+=Turso.at(turso-1);
    
    if(right_arm==2){
        snowman+=" \n";
    }
    else{
    snowman+=RightArm.at(right_arm-1);
}
snowman+=Base.at(base-1);


      return snowman;

}
}
 