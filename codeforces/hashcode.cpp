#include<bits/stdc++.h>
#include<fstream>
using namespace std;

struct skill {
    string id;              // name of the skill
    int level;              // level of the skill
};

struct contributor{
    string id;              // name of the contributor
    vector<skill> skills;   // skills that one possess
    bool available = true;  // if contributor is available
};

struct project {
    string id;              // name of the project
    int period;             // no. of days required to complete it
    int score;              // score of the project
    int deadline;           // deadline of the project
    int roles;              // no. of roles required
    vector<skill> skills;   // skills/roles required for project

    bool active = true;     // to be set false if project is done
};  

ofstream out;

vector<contributor> contributors;
vector<project> projects;
int numContr = -1;
int numProjects = -1;

void readInput () {
    ifstream in; 
    in.open("a_an_example.in.txt");

    in >> numContr;
    in >> numProjects;

    for (int i = 0; i < numContr; i++) {
        contributor cont;
        in >> cont.id;
        
        int numSkills;
        in >> numSkills;

        for (int j = 0; j < numSkills; j++) {
            skill s;
            in >> s.id;
            in >> s.level;
            cont.skills.push_back(s);
        }
        contributors.push_back(cont);
    } 

    for (int i = 0; i < numProjects; i++) {
        project pro;
        in >> pro.id;
        in >> pro.period;
        in >> pro.score;
        in >> pro.deadline;
        in >> pro.roles;

        for (int j = 0; j < pro.roles; j++) {
            skill s;
            in >> s.id;
            in >> s.level;

            pro.skills.push_back(s);
        }

        projects.push_back(pro);
    }
}

void testInput () {
    cout << "contributors:\n";

    for (auto & it : contributors) {
        cout << it.id << " : ";
        for (auto & i : it.skills) {
            cout << i.id << " " << i.level << "; ";
        }
        cout << endl;
    }

    cout << "projects:\n";

    for (auto & it : projects) {
        cout << it.id << " " << it.period << " " << it.score << " " << it.deadline << " " << it.roles << endl;
        for (auto & i : it.skills) {
            cout << i.id << " " << i.level << "; ";
        }
        cout << endl;
    }
    
}

project* earliest () {
    long long dl = INT64_MAX;
    project* pr = nullptr;

    for (auto &it : projects) {
        if (it.active && it.deadline < dl) {
            dl = it.deadline;
            pr = &it;
        }
    }

    return pr;
}

void solution () {
    while (true) {

        project* pr = earliest();
        if (pr == nullptr)
            break;
        
    }
}

int main () {

    // freopen("output.txt","w",stdout);

    out.open("a_an_example_output.txt");
    readInput();
    testInput();
    return 0;
}