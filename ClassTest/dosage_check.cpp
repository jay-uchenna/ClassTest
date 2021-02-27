//
//  dosage_check.cpp
//  ClassTest
//
//  Created by Jedidiah Uchenna on 27.02.2021.
//

#include "dosage_check.hpp"

inline dosage_check::dosage_check(char d, int e, double f){
   name_of_drug = d;
   total_doze = e;
   doze_per_dar = f;
}
inline char dosage_check::show_drug() const{
   return name_of_drug;
}
inline int dosage_check::get_remaining() const{
   return this ->total_doze;
}
