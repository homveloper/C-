#include <iostream>
#include <set>

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

struct Compare{
    bool operator() (const Member& a, const Member& b) const{
        if(a.age == b.age){
            return a.date < b.date;
        }else{
            return a.age < b.age;
        }
    }
};

// std::set<Member, decltype(compare)*> members(compare);
std::set<Member, Compare> members;

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

        members.insert(member);
    }

    for(const auto& m : members){
        std::cout<<m.age<<" "<<m.name<<'\n';
    }

    return 0;
}