#include<bits\stdc++.h>

using namespace std;

string unos;
int kolona;

int main()
{
    ifstream in ("3D structures.sdf");
    ofstream out("drugs.csv");
    out << "<DATABASE_ID>,<DATABASE_NAME>,<MOLECULAR_WEIGHT>,<JCHEM_ACCEPTOR_COUNT>,<JCHEM_AVERAGE_POLARIZABILITY>,<JCHEM_DONOR_COUNT>,<JCHEM_FORMAL_CHARGE>,<JCHEM_LOGP>,<JCHEM_NUMBER_OF_RINGS>,<JCHEM_PHYSIOLOGICAL_CHARGE>,<JCHEM_PKA>,<JCHEM_PKA_STRONGEST_ACIDIC>,<JCHEM_PKA_STRONGEST_BASIC>,<JCHEM_POLAR_SURFACE_AREA>,<JCHEM_REFRACTIVITY>,<JCHEM_ROTATABLE_BOND_COUNT>,<DRUGBANK_ID>" << endl;
    while(in >> unos)
    {
        if(unos=="END")
        {
            kolona=0;
            while(in >> unos)
            {
                if(unos=="$$$$")
                    break;
                if(unos=="<DATABASE_ID>")
                {
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<DATABASE_NAME>")
                {
                    if(kolona!=1)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<MOLECULAR_WEIGHT>")
                {
                    if(kolona!=2)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_ACCEPTOR_COUNT>")
                {
                    if(kolona!=3)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_AVERAGE_POLARIZABILITY>")
                {
                    if(kolona!=4)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_DONOR_COUNT>")
                {
                    if(kolona!=5)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_FORMAL_CHARGE>")
                {
                    if(kolona!=6)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_LOGP>")
                {
                    if(kolona!=7)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_NUMBER_OF_RINGS>")
                {
                    if(kolona!=8)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_PHYSIOLOGICAL_CHARGE>")
                {
                    if(kolona!=9)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_PKA>")
                {
                    if(kolona!=10)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_PKA_STRONGEST_ACIDIC>")
                {
                    if(kolona!=11)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_PKA_STRONGEST_BASIC>")
                {
                    if(kolona!=12)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_POLAR_SURFACE_AREA>")
                {
                    if(kolona!=13)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_REFRACTIVITY>")
                {
                    if(kolona!=14)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<JCHEM_ROTATABLE_BOND_COUNT>")
                {
                    if(kolona!=15)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << ",";
                    kolona++;
                }
                if(unos=="<DRUGBANK_ID>")
                {
                    if(kolona!=16)
                        {
                            out << ",";
                            kolona++;
                        }
                    in >> unos;
                    out << unos << endl;
                }
            }
        }
    }
    cout << "SUCCESSFULLY CONVERTED .SDF TO REQUIRED .CSV FILE" << endl;
}
