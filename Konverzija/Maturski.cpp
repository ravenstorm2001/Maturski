#include<bits\stdc++.h>

using namespace std;

string input;
int column;

int main()
{
    ifstream in ("3D structures.sdf");
    ofstream out("drugs.csv");
    out << "<DATABASE_ID>,<DATABASE_NAME>,<MOLECULAR_WEIGHT>,<JCHEM_ACCEPTOR_COUNT>,<JCHEM_AVERAGE_POLARIZABILITY>,<JCHEM_DONOR_COUNT>,<JCHEM_FORMAL_CHARGE>,<JCHEM_LOGP>,<JCHEM_NUMBER_OF_RINGS>,<JCHEM_PHYSIOLOGICAL_CHARGE>,<JCHEM_PKA>,<JCHEM_PKA_STRONGEST_ACIDIC>,<JCHEM_PKA_STRONGEST_BASIC>,<JCHEM_POLAR_SURFACE_AREA>,<JCHEM_REFRACTIVITY>,<JCHEM_ROTATABLE_BOND_COUNT>,<DRUGBANK_ID>" << endl;
    while(in >> input)
    {
        if(input=="END")
        {
            column=0;
            while(in >> input)
            {
                if(input=="$$$$")
                    break;
                if(input=="<DATABASE_ID>")
                {
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<DATABASE_NAME>")
                {
                    if(column!=1)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<MOLECULAR_WEIGHT>")
                {
                    if(kolona!=2)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_ACCEPTOR_COUNT>")
                {
                    if(column!=3)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_AVERAGE_POLARIZABILITY>")
                {
                    if(column!=4)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_DONOR_COUNT>")
                {
                    if(column!=5)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_FORMAL_CHARGE>")
                {
                    if(column!=6)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_LOGP>")
                {
                    if(column!=7)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_NUMBER_OF_RINGS>")
                {
                    if(column!=8)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_PHYSIOLOGICAL_CHARGE>")
                {
                    if(column!=9)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_PKA>")
                {
                    if(columna!=10)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_PKA_STRONGEST_ACIDIC>")
                {
                    if(column!=11)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_PKA_STRONGEST_BASIC>")
                {
                    if(column!=12)
                        {
                            out << ",";
                            columna++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_POLAR_SURFACE_AREA>")
                {
                    if(column!=13)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_REFRACTIVITY>")
                {
                    if(column!=14)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<JCHEM_ROTATABLE_BOND_COUNT>")
                {
                    if(column!=15)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << ",";
                    column++;
                }
                if(input=="<DRUGBANK_ID>")
                {
                    if(column!=16)
                        {
                            out << ",";
                            column++;
                        }
                    in >> input;
                    out << input << endl;
                }
            }
        }
    }
    cout << "SUCCESSFULLY CONVERTED .SDF TO REQUIRED .CSV FILE" << endl;
}
