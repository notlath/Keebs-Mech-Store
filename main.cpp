// ITE001 Group 8 Final Project
#include <iostream>
#include <locale>
#include <iomanip>
#include <string>

using namespace std;
class comma_numpunct : public std::numpunct<char>
{
protected:
    virtual char do_thousands_sep() const
    {
        return ',';
    }

    virtual std::string do_grouping() const
    {
        return "\03";
    }
};

main()
{
    int trans, mp, mod, essentials,                                                                   // main switch cases
        keySwitches, keyStabilizers, keyCaps, keyLSwitch, keyLStabs, keyLB, keyDP, keyRGB, keyCasing, // secondary switch cases

        qtyGateron, qtyOutemu, qtyCherry, qtyPlate, qtyPCB, qtyFrank, qtyRubber, qtyABS, qtyPBT, qtyFullbdl, qtySoBo, qtyLub, qtyFullbdl2, qtyDicl, qtyGrease, qtyBasbdl, qtyDelbdl, qtyPrebdl, qtySpacebar, qtyCaseFoam, qtyPCBFoam, qtyRGB, qtyUnder, qtyNonB, qtyABSPC, qtyAcrylic, qtyAluminum, pay;

    int totGateron = 0, totOutemu = 0, totCherry = 0, totPlate = 0, totPCB = 0, totFrank = 0, totRubber = 0, totABS = 0, totPBT = 0, totFullbdl = 0, totSoBo = 0, totLub = 0, totFullbdl2 = 0, totDicl = 0, totGrease = 0, totBasbdl = 0, totDelbdl = 0, totPrebdl = 0, totbill = 0, change = 0, totSpacebar = 0, totCaseFoam = 0, totPCBFoam = 0, totRGB = 0, totUnder = 0, totNonB = 0, totABSPC = 0, totAcrylic = 0, totAluminum = 0;
    string name, order_number, cashier;

    std::locale comma_locale(std::locale(), new comma_numpunct());
    std::cout.imbue(comma_locale);

    cout << "\nPlease enter your full name: ";
    getline(cin, name);

    cout << "\nWhat is your order number? ";
    getline(cin, order_number);
    cout << "\nPlease enter cashier name: ";
    getline(cin, cashier);
    cout << "\n";

    system("cls");

    cout << "                        [===================================================]                        \n";
    cout << "                        |     TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES    |                        \n";
    cout << "                        |                   Quezon City                     |                        \n";
    cout << "                        |          ITE001 - Computer Programming 1          |                        \n";
    cout << "                        |            1st Semester S.Y. 2020-2021            |                        \n";
    cout << "                        |                   FINAL PROJECT                   |                        \n";
    cout << "                        |                                                   |                        \n";
    cout << "                        |                                                   |                        \n";
    cout << "                        |  Title:    Keebs Mech Store                       |                        \n";
    cout << "                        |                                                   |                        \n";
    cout << "                        |  Members:  CAPILLA, AIRAH - BSIT                  |                        \n";
    cout << "                        |            CASTANAS, SHAN CAI - BSCS              |                        \n";
    cout << "                        |            LACIDO, MARY JOY - BSCS                |                        \n";
    cout << "                        |            PAGSUGUIRON, LATHRELL - BSCS           |                        \n";
    cout << "                        |            VALEZA, NICOLE FRANCHESCA - BSCS       |                        \n";
    cout << "                        |                                                   |                        \n";
    cout << "                        |  Instructor: Ms. Jasmin A. Caliwag                |                        \n";
    cout << "                        [===================================================]                        \n\n";

    cout << "                        NAME: " << name << endl;
    cout << "                        ORDER NUMBER: #" << order_number << endl;
    cout << "                        CASHIER: " << cashier << endl;

    do
    {
        cout << "\n                        T.I.P. Keebs Mech Store";
        cout << "\n                        1. Main Parts ";
        cout << "\n                        2. Modding Tools";
        cout << "\n                        3. Other Essentials\n";

        cout << "\n                        END [9]";
        cout << "\n                        WHAT KIND OF PRODUCT DO YOU WANT? [1-3]: ";
        cin >> trans;

        switch (trans)
        {

        case 1:
        {
            do
            {

                cout << "\n                        MAIN PARTS";
                // Menu for Clothes
                cout << "\n                        1. Switches";
                cout << "\n                        2. Stabilizers";
                cout << "\n                        3. Keycaps";

                cout << "\n\n                        BACK [9]";
                cout << "\n                        PLEASE SELECT A CERTAIN TYPE: [1-3]: ";
                cin >> mp;

                switch (mp)
                {
                case 1:
                {
                    do
                    {
                        cout << "\n                        SWITCHES";
                        // Menu for Clothes
                        cout << "\n                        1. Gateron/Set      Php442";
                        cout << "\n                        2. Outemu/Set       Php588";
                        cout << "\n                        3. Cherry MX/Set    Php1,179";

                        cout << "\n\n                        SELECT SWITCHES: [1-3]: ";

                        cin >> keySwitches;
                        switch (keySwitches)

                        {
                        case 1:
                            cout << "                        How many Gateron/Set? ";
                            cin >> qtyGateron;
                            totGateron = totGateron + (qtyGateron * 442);
                            totbill += totGateron;
                            cout << "\n                        Updated Gateron/Set Bill = " << totGateron << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many Outemu/Set? ";
                            cin >> qtyOutemu;
                            totOutemu = totOutemu + (qtyOutemu * 588);
                            totbill += totOutemu;
                            cout << "\n                        Updated Outemu/Set Bill = " << totOutemu << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many Cherry MX/Set? ";
                            cin >> qtyCherry;
                            totCherry = totCherry + (qtyCherry * 1179);
                            totbill += totCherry;
                            cout << "\n                        Updated Cherry MX/Set Bill = " << totCherry << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }
                    } while (keySwitches <= 3);
                    break;
                }
                case 2:
                {
                    do
                    {
                        cout << "\n                        STABILIZERS";
                        // Menu for Clothes
                        cout << "\n                        1. Plate Mount Stabilizers    Php500";
                        cout << "\n                        2. PCB Mount Stabilizers      Php884";
                        cout << "\n                        3. Frankenstein Stabilizers   Php2,888";

                        cout << "\n\n                        SELECT STABILIZERS: [1-3]: ";

                        cin >> keyStabilizers;
                        switch (keyStabilizers)
                        {
                        case 1:
                            cout << "                        How many Plate Mount Stabilizers? ";
                            cin >> qtyPlate;
                            totPlate = totPlate + (qtyPlate * 500);
                            totbill += totPlate;
                            cout << "\n                        Updated Plate Mount Stabilizers Bill = " << totPlate << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many PCB Mount Stabilizers? ";
                            cin >> qtyPCB;
                            totPCB = totPCB + (qtyPCB * 884);
                            totbill += totPCB;
                            cout << "\n                        Updated PCB Mount Stabilizers = " << totPCB << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many Frankenstein Stabilizers? ";
                            cin >> qtyFrank;
                            totFrank = totFrank + (qtyFrank * 2888);
                            totbill += totFrank;
                            cout << "\n                        Updated Frankenstein Stabilizers Bill = " << totFrank << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }
                    } while (keyStabilizers <= 3);
                    break;
                }
                case 3:
                {
                    do
                    {
                        cout << "\n                        Keycaps";
                        // Menu for Clothes
                        cout << "\n                        1. Rubber Keycaps    Php1,354";
                        cout << "\n                        2. ABS Keycaps       Php884";
                        cout << "\n                        3. PBT Keycaps       Php2,297";

                        cout << "\n\n                        SELECT KEYCAPS: [1-3]: ";

                        cin >> keyCaps;
                        switch (keyCaps)
                        {
                        case 1:
                            cout << "                        How many Rubber Keycaps? ";
                            cin >> qtyRubber;
                            totRubber = totRubber + (qtyRubber * 1354);
                            totbill += totRubber;
                            cout << "\n                        Updated Plate Mount Stabilizers Bill = " << totPlate << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many ABS Keycaps? ";
                            cin >> qtyABS;
                            totABS = totABS + (qtyABS * 884);
                            totbill += totABS;
                            cout << "\n                        Updated PCB Mount Stabilizers = " << totPCB << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many PBT Keycaps? ";
                            cin >> qtyPBT;
                            totPBT = totPBT + (qtyPBT * 2297);
                            totbill += totPBT;
                            cout << "\n                        Updated Frankenstein Stabilizers Bill = " << totPBT << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }
                    } while (keyCaps <= 3);
                    break;
                }
                default:
                {
                    system("cls");
                }
                }

                // end of switch cloth
            } // end of dowhile cloth
            while (mp <= 3);
            break;

        case 2:
            do
            {
                cout << "\n                        MODDING TOOLS";
                cout << "\n                        1. For Lubing Switches ";
                cout << "\n                        2. For Lubing Stabilizers";
                cout << "\n                        3. Lubing Essentials";

                cout << "\n\n                        BACK [9]";
                cout << "\n                        PLEASE SELECT A CERTAIN TYPE: [1-3]: ";

                cin >> mod;

                switch (mod)
                {
                case 1:
                {
                    do
                    {
                        cout << "\n                        FOR LUBING SWITCHES";
                        // Menu for Clothes
                        cout << "\n                        1. Full Bundle Set                  Php375";
                        cout << "\n                        2. Switch Opener & Brush Only       Php150";
                        cout << "\n                        3. Only Lubricant (5g)              Php250";

                        cout << "\n\n                        SELECT LUBING SWITCHES: [1-3]: ";

                        cin >> keyLSwitch;
                        switch (keyLSwitch)
                        {
                        case 1:
                            cout << "                        How many Full Bundle Set? ";
                            cin >> qtyFullbdl;
                            totFullbdl = totFullbdl + (qtyFullbdl * 375);
                            totbill += totFullbdl;
                            cout << "\n                        Updated Full Bundle Set = " << totFullbdl << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many Switch Opener & Brush Only? ";
                            cin >> qtySoBo;
                            totSoBo = totSoBo + (qtySoBo * 150);
                            totbill += totSoBo;
                            cout << "\n                        Updated Switch Opener & Brush Only = " << totSoBo << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many Only Lubricant? ";
                            cin >> qtyLub;
                            totLub = totLub + (qtyLub * 250);
                            totbill += totLub;
                            cout << "\n                        Updated Only Lubricant = " << totLub << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }

                    } while (keyLSwitch <= 3);
                    break;
                case 2:
                    do
                    {
                        cout << "\n                        FOR LUBING STABILIZERS";
                        // Menu for Clothes
                        cout << "\n                        1. Full Bundle Set                     Php375";
                        cout << "\n                        2. Dieletric Grease & Cloth Tape       Php230";
                        cout << "\n                        3. Dieletric Grease Only (10g)         Php210";

                        cout << "\n\n                        SELECT LUBING STABILIZERS: [1-3]: ";
                        cin >> keyLStabs;
                        switch (keyLStabs)
                        {
                        case 1:
                            cout << "                        How many Full Bundle Set? ";
                            cin >> qtyFullbdl2;
                            totFullbdl2 = totFullbdl2 + (qtyFullbdl2 * 375);
                            totbill += totFullbdl2;
                            cout << "\n                        Updated Full Bundle Set = " << totFullbdl2 << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;

                        case 2:
                            cout << "                        How many Dieletric Grease & Cloth Tape? ";
                            cin >> qtyDicl;
                            totDicl = totDicl + (qtyDicl * 230);
                            totbill += totDicl;
                            cout << "\n                        Updated Dieletric Grease & Cloth Tape = " << totDicl << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;

                        case 3:
                            cout << "                        How many Dieletric Grease Only (10g)? ";
                            cin >> qtyGrease;
                            totGrease = totGrease + (qtyGrease * 210);
                            totbill += totGrease;
                            cout << "\n                        Updated Dieletric Grease Only (10g) = " << totGrease << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }

                    } while (keyLStabs <= 3);
                    break;
                case 3:
                    do
                    {
                        cout << "\n                        LUBING BUNDLES";
                        // Menu for Clothes
                        cout << "\n                        1. Basic Bundle           Php594";
                        cout << "\n                        2. Deluxe Bundle          Php679";
                        cout << "\n                        3. Premium Bundle         Php899";

                        cout << "\n\n                        SELECT LUBING BUNDLES: [1-3]: ";
                        cin >> keyLB;
                        switch (keyLB)
                        {
                        case 1:
                            cout << "                        How many Basic Bundle? ";
                            cin >> qtyBasbdl;
                            totBasbdl = totBasbdl + (qtyBasbdl * 594);
                            totbill += totBasbdl;
                            cout << "\n                        Updated Basic Bundle = " << totBasbdl << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many Deluxe Bundle? ";
                            cin >> qtyDelbdl;
                            totDelbdl = totDelbdl + (qtyDelbdl * 679);
                            totbill += totDelbdl;
                            cout << "\n                        Updated Deluxe Bundle = " << totDelbdl << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many Deluxe Bundle? ";
                            cin >> qtyPrebdl;
                            totPrebdl = totPrebdl + (qtyDelbdl * 899);
                            totbill += totPrebdl;
                            cout << "\n                        Updated Deluxe Bundle = " << totPrebdl << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }

                    } while (keyLB <= 3);
                    break;
                }
                default:
                {
                    system("cls");
                }
                }

            } while (mod <= 3);
            break;

        case 3:
            do
            {
                cout << "\n                        OTHER ESSENTIALS";
                cout << "\n                        1. Dampening Foams  ";
                cout << "\n                        2. RGB Lighting";
                cout << "\n                        3. Keyboard Case";

                cout << "\n\n                        BACK [9]";
                cout << "\n                        PLEASE SELECT A CERTAIN TYPE: [1-3]: ";

                cin >> essentials;

                switch (essentials)
                {
                case 1:
                {
                    do
                    {
                        cout << "\n                        DAMPENING FOAMS";
                        // Menu for Clothes
                        cout << "\n                        1. Spacebar Foam          Php25";
                        cout << "\n                        2. Case Foam              Php45";
                        cout << "\n                        3. PCB Foam               Php199";

                        cout << "\n\n                        SELECT DAMPENING FOAMS: [1-3]: ";

                        cin >> keyDP;
                        switch (keyDP)
                        {
                        case 1:
                            cout << "                        How many Spacebar Foam? ";
                            cin >> qtySpacebar;
                            totSpacebar = totSpacebar + (qtySpacebar * 25);
                            totbill += totSpacebar;
                            cout << "\n                        Updated Spacebar Foam = " << totSpacebar << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many Case Foam? ";
                            cin >> qtyCaseFoam;
                            totCaseFoam = totCaseFoam + (qtyCaseFoam * 45);
                            totbill += totCaseFoam;
                            cout << "\n                        Updated Case Foam = " << totCaseFoam << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many PCB Foam? ";
                            cin >> qtyPCBFoam;
                            totPCBFoam = totPCBFoam + (qtyPCBFoam * 199);
                            totbill += totPCBFoam;
                            cout << "\n                        Updated PCB Foam = " << totPCBFoam << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }

                    } while (keyDP <= 3);
                    break;

                case 2:
                    do
                    {
                        cout << "\n                        RGB LIGHTING (Embedded in PCB)";
                        // Menu for Clothes
                        cout << "\n                        1. RGB Backlighting            Php1,500";
                        cout << "\n                        2. Underglow RGB               Php1,800";
                        cout << "\n                        3. Non-Backlit                 Php100";

                        cout << "\n\n                        SELECT RGB LIGHTING [1-3]: ";
                        cin >> keyRGB;
                        switch (keyRGB)
                        {
                        case 1:
                            cout << "                        How many RGB Backlighting? ";
                            cin >> qtyRGB;
                            totRGB = totRGB + (qtyRGB * 1500);
                            totbill += totRGB;
                            cout << "\n                        Updated RGB Backlighting = " << totRGB << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;

                        case 2:
                            cout << "                        How many Underglow RGB? ";
                            cin >> qtyUnder;
                            totUnder = totUnder + (qtyUnder * 1800);
                            totbill += totUnder;
                            cout << "\n                        Updated Underglow RGB = " << totUnder << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;

                        case 3:
                            cout << "                        How many Non-Backlit? ";
                            cin >> qtyNonB;
                            totNonB = totNonB + (qtyNonB * 100);
                            totbill += totNonB;
                            cout << "\n                        Updated Non-Backlit = " << totNonB << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }

                    } while (keyRGB <= 3);
                    break;
                case 3:
                    do
                    {
                        cout << "\n                        KEYBOARD CASING";
                        // Menu for Clothes
                        cout << "\n                        1. ABS Plastic Case                                 Php1,473";
                        cout << "\n                        2. TOFU65 Acrylic Mechanical Keyboard Case          Php6,425";
                        cout << "\n                        3. KBD67 V3 Gasket Mount Aluminum Case              Php7,368";

                        cout << "\n\n                        SELECT KEYBOARD CASE: [1-3]: ";
                        cin >> keyCasing;
                        switch (keyCasing)
                        {
                        case 1:
                            cout << "                        How many ABS Plastic Case? ";
                            cin >> qtyABSPC;
                            totABSPC = totABSPC + (qtyABSPC * 1473);
                            totbill += totABSPC;
                            cout << "\n                        Updated ABS Plastic Case = " << totABSPC << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 2:
                            cout << "                        How many TOFU65 Acrylic Mechanical Keyboard Case? ";
                            cin >> qtyAcrylic;
                            totAcrylic = totAcrylic + (qtyAcrylic * 6425);
                            totbill += totAcrylic;
                            cout << "\n                        Updated TOFU65 Acrylic Mechanical Keyboard Case = " << totAcrylic << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        case 3:
                            cout << "                        How many KBD67 V3 Gasket Mount Aluminum Case? ";
                            cin >> qtyAluminum;
                            totAluminum = totAluminum + (qtyAluminum * 7368);
                            totbill += totAluminum;
                            cout << "\n                        Updated KBD67 V3 Gasket Mount Aluminum Case = " << totAluminum << "\n";
                            cout << "                        Updated Total Bill = " << totbill << "\n";
                            break;
                        default:
                            cout << "                        INVALID INPUT";
                        }

                    } while (keyCasing <= 3);
                    break;
                }
                default:
                {
                    system("cls");
                }
                }

            } while (essentials <= 3);
            break;

        default:

            system("cls");
            cout << "\n                        THANK YOU PLEASE COME AGAIN!\n\n";

        } // end of switch trans
        }
    } while (trans <= 3); // end of dowhile ukayukay

    system("cls"); // clear screen

    // Formula for Total Bill
    totbill = totGateron + totOutemu + totCherry + totPlate + totPCB + totFrank + totRubber + totABS + totPBT + totFullbdl + totFullbdl2 + totSoBo + totLub + totDicl + totGrease + totBasbdl + totDelbdl + totPrebdl + totSpacebar + totCaseFoam + totPCBFoam + totRGB + totUnder + totNonB + totABSPC + totAcrylic + totAluminum;

    // Summary

    cout << "\n                        [===================================================]                        \n";
    cout << "                                      WELCOME TO KEEBS MECH STORE!         \n";
    cout << "                        CASHIER: " << cashier << "\n";
    cout << "                        ORDER #: " << order_number << "        \n";
    cout << "\n                        -----------------------------------------------------                        \n";
    cout << "                                         Summary of Purchases         \n";
    cout << "                        ITEMS                                       PRICE        \n";
    cout << "                        Gateron/Set                                 P" << totGateron << "                         \n";
    cout << "                        Outemu/Set                                  P" << totOutemu << "                         \n";
    cout << "                        Cherry MX/Set                               P" << totCherry << "                         \n";
    cout << "                                              \n";
    cout << "                        Plate Mount Stabilizer                      P" << totPlate << "                         \n";
    cout << "                        PCB Mount Stabilizers                       P" << totPCB << "                         \n";
    cout << "                        Frankenstein Stabilizers                    P" << totFrank << "                         \n";
    cout << "                                              \n";
    cout << "                        Rubber Keycaps                              P" << totRubber << "                         \n";
    cout << "                        ABS Keycaps                                 P" << totABS << "                         \n";
    cout << "                        PBT Keycaps                                 P" << totPBT << "                         \n";
    cout << "                                              \n";
    cout << "                        Full Bundle Set                             P" << totFullbdl << "                         \n";
    cout << "                        Switch Opener & Brush Only                  P" << totSoBo << "                         \n";
    cout << "                        Only Lubricant (5g)                         P" << totLub << "                         \n";
    cout << "                                              \n";
    cout << "                        Full Bundle Set                             P" << totFullbdl2 << "                         \n";
    cout << "                        Dieletric Grease & Cloth Tape               P" << totDicl << "                         \n";
    cout << "                        Dieletric Grease Only (10g)                 P" << totGrease << "                         \n";
    cout << "                                              \n";
    cout << "                        Basic Bundle                                P" << totBasbdl << "                         \n";
    cout << "                        Deluxe Bundle                               P" << totDelbdl << "                         \n";
    cout << "                        Premium Bundle                              P" << totPrebdl << "                         \n";
    cout << "                                              \n";
    cout << "                        Spacebar Foam                               P" << totSpacebar << "                         \n";
    cout << "                        Case Foam                                   P" << totCaseFoam << "                         \n";
    cout << "                        PCB Foam                                    P" << totPCBFoam << "                         \n";
    cout << "                                              \n";
    cout << "                        RGB Backlighting                            P" << totRGB << "                         \n";
    cout << "                        Underglow RGB                               P" << totUnder << "                         \n";
    cout << "                        Non-Backlit                                 P" << totNonB << "                         \n";
    cout << "                                              \n";
    cout << "                        ABS Plastic Case                            P" << totABSPC << "                         \n";
    cout << "                        TOFU65 Acrylic Keyboard Case                P" << totAcrylic << "                         \n";
    cout << "                        KBD67 V3 Gasket Mount Aluminum Case         P" << totAluminum << "                         \n";
    cout << "                        -----------------------------------------------------                        \n";
    cout << "                        TOTAL:                                      P" << totbill << "  \n";
    cout << "                        -----------------------------------------------------                        \n";

    /*cout << "                        Enter Payment:                              P";

    cin >> pay;*/

    // Formula for change Note: Change should not be NEGATIVE used if else condition

    do
    {
        cout << "                        Enter Amount:                               P";
        cin >> pay;

    } while (pay < totbill);
    change = pay - totbill;

    cout << "                        CHANGE:                                     P" << change << "  ";
    cout << "\n                        [===================================================]                        \n";

} // end of main

