#include <iostream>
#include <algorithm>
#include <vector>

struct Member{
    int age;
    std::string name;
    int date;
};

bool compare(const Member& a, const Member& b){
    if(a.age == b.age){
        return a.date < b.date;
    }else{
        return a.age < b.age;
    }
}



std::vector<Member> members;

int main(){
    std::ios_base :: sync_with_stdio(false); 
    std::cin.tie(NULL); 
    std::cout.tie(NULL);

    int N, age;
    std::string name;
    std::cin>>N;

    for(int i=0; i<N; i++){
        Member member;
        std::cin>>member.age>>member.name;
        member.date = i;

        members.push_back(member);
    }

    std::sort(members.begin(), members.end(), compare);

    for(int i=0; i<N; i++){
        std::cout<<members[i].age<<" "<<members[i].name<<'\n';
    }

    return 0;
}