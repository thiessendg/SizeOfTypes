#pragma once
class ClassEmpty; //fwd declaration

class ClassDoubles
{
public:
    ClassDoubles();
    virtual ~ClassDoubles();
private:
    double thisClassDouble;
    ClassEmpty * pAnEmptyClass;
};

