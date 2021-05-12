/**
 * @file binary.hpp
 * @author Enea Romano
 * @brief this program translate
 * @version 1.0
 * @date 2021-05-12
 * 
 * @copyright Copyright (c++) 2021
 * 
 */

#include <iostream>

using namespace std;

bool is_multiplicable;

void translate_binary(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8) {

    char n8_c;
    char n7_c;
    char n6_c;
    char n5_c;
    char n4_c;
    char n3_c;
    char n2_c;
    char n1_c;

    if(n8 == 0) {is_multiplicable = false; n8_c = 0;}
    else if(n8 == 1) {is_multiplicable = true; n8_c = 1;}

    if(n7 == 0) {is_multiplicable = false; n7_c = 0;}
    else if(n7 == 1) {is_multiplicable = true; n7_c = 2;}

    if(n6 == 0) {is_multiplicable = false; n6_c = 0;}
    else if(n6 == 1) {is_multiplicable = true; n6_c = 4;}

    if(n5 == 0) {is_multiplicable = false; n5_c = 0;}
    else if(n5 == 1) {is_multiplicable = true; n5_c = 8;}

    if(n4 == 0) {is_multiplicable = false; n4_c = 0;}
    else if(n4 == 1) {is_multiplicable = true; n4_c = 16;}

    if(n3 == 0) {is_multiplicable = false; n3_c = 0;}
    else if(n3 == 1) {is_multiplicable = true; n3_c = 32;}

    if(n2 == 0) {is_multiplicable = false; n2_c = 0;}
    else if(n2 == 1) {is_multiplicable = true; n2_c = 64;}

    if(n1 == 0) {is_multiplicable = false; n1_c = 0;}
    else if(n1 == 1) {is_multiplicable = true; n1_c = 128;}

    cout<<char(n8_c + n7_c + n6_c + n5_c + n4_c + n3_c + n2_c + n1_c)<<endl;
}