//
//  main.cpp
//  ClassTest
//
//  Created by Jedidiah Uchenna on 26.02.2021.
//

#include <iostream>

class just_a_test{
    private:
        char name_of_drug;
        int total_doze;
        double doze_per_dar;
    public:
        just_a_test(){
            name_of_drug = 'e';
            total_doze = 100;
            doze_per_dar = 2.5;
        }
        just_a_test(char d){
            name_of_drug = d;
            total_doze = 100;
            doze_per_dar = 2.5;
        }
        just_a_test(char d, int e){
           name_of_drug = d;
           total_doze = e;
           doze_per_dar = 2.5;
        }
        just_a_test(double f){
            name_of_drug = 'a';
            total_doze = 40;
            doze_per_dar = f;
        }
        just_a_test(int a){
            name_of_drug = 'v';
            total_doze = a;
            doze_per_dar = 3.5;
        }
        just_a_test(char d, int e, double f);
        void no_remaining(){
            total_doze -= doze_per_dar;
        };
        char show_drug() const;
        int get_remaining() const;
    
};
 inline just_a_test::just_a_test(char d, int e, double f){
    name_of_drug = d;
    total_doze = e;
    doze_per_dar = f;
}
inline char just_a_test::show_drug() const{
    return name_of_drug;
}
inline int just_a_test::get_remaining() const{
    return this ->total_doze;
}

void display(const just_a_test* );

int main() {
    
    just_a_test person1, person2('h'), person3('f', 20), person4('q', 200, 5.8), person5(92), person6(92.5);
    
    display(&person1);
    
    for (int i=0; i < 10; i++){
    person1.no_remaining();
    person2.no_remaining();
    person3.no_remaining();
    person4.no_remaining();
    person5.no_remaining();
    person6.no_remaining();
    }
    
    display(&person1);
    
    return 0;
}

void display(const just_a_test* a){
    for (int i = 0; i < 6; i++)
    std::cout <<(a-i)->show_drug() << " remains " << (a-i)->get_remaining() << " dozes\n";
}
