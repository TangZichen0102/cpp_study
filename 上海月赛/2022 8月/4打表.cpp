#include <bits/stdc++.h>

using namespace std;
int cnt;
int vis[10];

map<int, int, less<int>> dp = {{10000, 26057}, {20000, 58741}, {30000, 91568}, {40000, 154829}, {50000, 215479}, {60000, 283976}, {70000, 352719}, {80000, 413279}, {90000, 481796}, {100000, 541629}, {110000, 612079}, {120000, 680597}, {130000, 740329}, {140000, 809746}, {150000, 869375}, {160000, 938127}, {170000, 1037954}, {180000, 1276354}, {190000, 1426753}, {200000, 1573942}, {210000, 1724365}, {220000, 1862543}, {230000, 2031965}, {240000, 2170465}, {250000, 2409653}, {260000, 2568931}, {270000, 2708354}, {280000, 2856431}, {290000, 3016954}, {300000, 3165274}, {310000, 3405762}, {320000, 3561942}, {330000, 3702465}, {340000, 3850642}, {350000, 3987621}, {360000, 4159263}, {370000, 4297531}, {380000, 4537921}, {390000, 4695132}, {400000, 4835621}, {410000, 4982731}, {420000, 5143276}, {430000, 5291643}, {440000, 5430962}, {450000, 5690243}, {460000, 5829431}, {470000, 5976821}, {480000, 6138254}, {490000, 6285431}, {500000, 6425931}, {510000, 6583142}, {520000, 6823541}, {530000, 6971832}, {540000, 7132465}, {550000, 7280543}, {560000, 7419832}, {570000, 7569132}, {580000, 7816432}, {590000, 7954821}, {600000, 8126354}, {610000, 8264531}, {620000, 8413952}, {630000, 8562143}, {640000, 8712543}, {650000, 8950732}, {660000, 9120465}, {670000, 9258431}, {680000, 9407832}, {690000, 9547132}, {700000, 9705432}, {710000, 9843721}, {720000, 10487539}, {730000, 10875293}, {740000, 12483906}, {750000, 12870549}, {760000, 13479082}, {770000, 13865904}, {780000, 14375629}, {790000, 14862093}, {800000, 15369804}, {810000, 15847329}, {820000, 16357092}, {830000, 16842905}, {840000, 17350649}, {850000, 17839062}, {860000, 18346905}, {870000, 18734529}, {880000, 19342085}, {890000, 19728604}, {900000, 20438659}, {910000, 20836194}, {920000, 21435907}, {930000, 21830659}, {940000, 23409185}, {950000, 23806915}, {960000, 24306759}, {970000, 24803195}, {980000, 25198704}, {990000, 25796318}, {1000000, 26195083}, {1010000, 26791804}, {1020000, 27190548}, {1030000, 27689051}, {1040000, 28175904}, {1050000, 28673419}, {1060000, 29173084}, {1070000, 29658703}, {1080000, 30278549}, {1090000, 30765192}, {1100000, 31274906}, {1110000, 31760549}, {1120000, 32169084}, {1130000, 32756904}, {1140000, 34165729}, {1150000, 34751092}, {1160000, 35149806}, {1170000, 35728419}, {1180000, 36147092}, {1190000, 36721905}, {1200000, 37140659}, {1210000, 37619082}, {1220000, 38126905}, {1230000, 38614529}, {1240000, 39124085}, {1250000, 39608714}, {1260000, 40218659}, {1270000, 40716293}, {1280000, 41205937}, {1290000, 41702659}, {1300000, 42098173}, {1310000, 42695803}, {1320000, 43095628}, {1330000, 43691082}, {1340000, 45089713}, {1350000, 45687219}, {1360000, 46085192}, {1370000, 46581903}, {1380000, 47081539}, {1390000, 47569081}, {1400000, 48065913}, {1410000, 48562319}, {1420000, 49062183}, {1430000, 49538702}, {1440000, 50168439}, {1450000, 50647192}, {1460000, 51063927}, {1470000, 51640739}, {1480000, 52049183}, {1490000, 52637904}, {1500000, 53046729}, {1510000, 53621094}, {1520000, 54029816}, {1530000, 54618329}, {1540000, 56027193}, {1550000, 56412907}, {1560000, 57021649}, {1570000, 57409182}, {1580000, 58016924}, {1590000, 58403629}, {1600000, 59013284}, {1610000, 59387602}, {1620000, 59874216}, {1630000, 60495182}, {1640000, 60982714}, {1650000, 61490538}, {1660000, 61978052}, {1670000, 62485903}, {1680000, 62973418}, {1690000, 63481092}, {1700000, 63958702}, {1710000, 64378219}, {1720000, 64953081}, {1730000, 65371904}, {1740000, 65940328}, {1750000, 67349081}, {1760000, 67934802}, {1770000, 68342519}, {1780000, 68931072}, {1790000, 69328704}, {1800000, 69825317}, {1810000, 70436192}, {1820000, 70932815}, {1830000, 71430659}, {1840000, 71928063}, {1850000, 72416905}, {1860000, 72914538}, {1870000, 73412095}, {1880000, 73908614}, {1890000, 74308529}, {1900000, 74905182}, {1910000, 75302916}, {1920000, 75901438}, {1930000, 76298051}, {1940000, 76893502}, {1950000, 78293416}, {1960000, 78691052}, {1970000, 79268503}, {1980000, 79654218}, {1990000, 80375192}, {2000000, 80762914}, {2010000, 81370549}, {2020000, 81759062}, {2030000, 82365904}, {2040000, 82753419}, {2050000, 83261094}, {2060000, 83749602}, {2070000, 84257319}, {2080000, 84735091}, {2090000, 85241906}, {2100000, 85730429}, {2110000, 86239071}, {2120000, 86724903}, {2130000, 87234519}, {2140000, 87621093}, {2150000, 89217604}, {2160000, 89615327}, {2170000, 90326184}, {2180000, 90723815}, {2190000, 91320658}, {2200000, 91708263}, {2210000, 92306815}, {2220000, 92704538}, {2230000, 93204185}, {2240000, 93687502}, {2250000, 94186327}, {2260000, 94683071}, {2270000, 95182704}, {2280000, 95680327}, {2290000, 96178052}, {2300000, 96573802}, {2310000, 97163428}, {2320000, 97561082}, {2330000, 98157603}, {2340000, 98546217}, {2350000, 102875946}, {2360000, 104869527}, {2370000, 106853297}, {2380000, 108745936}, {2390000, 120849637}, {2400000, 124835097}, {2410000, 126805947}, {2420000, 128697405}, {2430000, 130794286}, {2440000, 134785926}, {2450000, 136759408}, {2460000, 138652097}, {2470000, 140756938}, {2480000, 143729608}, {2490000, 146723098}, {2500000, 148605937}, {2510000, 150698427}, {2520000, 153692087}, {2530000, 156483927}, {2540000, 158469307}, {2550000, 160573298}, {2560000, 163547928}, {2570000, 165429708}, {2580000, 168423097}, {2590000, 170526948}, {2600000, 173498506}, {2610000, 175392086}, {2620000, 178364925}, {2630000, 180469527}, {2640000, 183462097}, {2650000, 185346927}, {2660000, 187329506}, {2670000, 190435287}, {2680000, 193406857}, {2690000, 195287406}, {2700000, 197283065}, {2710000, 201486957}, {2720000, 204379618}, {2730000, 206374198}, {2740000, 208356947}, {2750000, 210459738}, {2760000, 214356098}, {2770000, 216307958}, {2780000, 218097536}, {2790000, 230195487}, {2800000, 234086957}, {2810000, 236079518}, {2820000, 238064197}, {2830000, 240167958}, {2840000, 243059718}, {2850000, 246035198}, {2860000, 248016957}, {2870000, 249876305}, {2880000, 251983076}, {2890000, 254973816}, {2900000, 257948306}, {2910000, 259841076}, {2920000, 261945837}, {2930000, 264918507}, {2940000, 267913085}, {2950000, 269804735}, {2960000, 271896405}, {2970000, 274891065}, {2980000, 276853914}, {2990000, 279648305}, {3000000, 281753096}, {3010000, 284735916}, {3020000, 286719405}, {3030000, 289613075}, {3040000, 291705846}, {3050000, 294687305}, {3060000, 296581074}, {3070000, 298563714}, {3080000, 302769518}, {3090000, 305762198}, {3100000, 307645928}, {3110000, 309628517}, {3120000, 312745098}, {3130000, 315706948}, {3140000, 317598406}, {3150000, 319582076}, {3160000, 321685947}, {3170000, 325679408}, {3180000, 327561098}, {3190000, 329546817}, {3200000, 341629708}, {3210000, 345612098}, {3220000, 347506928}, {3230000, 349287506}, {3240000, 351492087}, {3250000, 354286917}, {3260000, 357269408}, {3270000, 359261087}, {3280000, 361457928}, {3290000, 364219708}, {3300000, 367214098}, {3310000, 369205847}, {3320000, 371298506}, {3330000, 374192086}, {3340000, 376184925}, {3350000, 379158406}, {3360000, 381264097}, {3370000, 384156927}, {3380000, 386129507}, {3390000, 389124076}, {3400000, 391206857}, {3410000, 394087516}, {3420000, 396082175}, {3430000, 398064725}, {3440000, 402179638}, {3450000, 405173298}, {3460000, 407156938}, {3470000, 409138627}, {3480000, 412056398}, {3490000, 415027968}, {3500000, 416987305}, {3510000, 418972065}, {3520000, 420975836}, {3530000, 423968507}, {3540000, 426951087}, {3550000, 428935716}, {3560000, 430928617}, {3570000, 432915087}, {3580000, 436905827}, {3590000, 438796205}, {3600000, 450892176}, {3610000, 452873916}, {3620000, 456839207}, {3630000, 458731096}, {3640000, 460835927}, {3650000, 462819507}, {3660000, 465812097}, {3670000, 468703925}, {3680000, 470698315}, {3690000, 472691085}, {3700000, 475682913}, {3710000, 478539206}, {3720000, 480652197}, {3730000, 482635917}, {3740000, 485619307}, {3750000, 487512096}, {3760000, 490615837}, {3770000, 492587306}, {3780000, 495381076}, {3790000, 497362815}, {3800000, 501679428}, {3810000, 503672198}, {3820000, 506437928}, {3830000, 508429617}, {3840000, 510634298}, {3850000, 513607948}, {3860000, 516398407}, {3870000, 518392076}, {3880000, 520486937}, {3890000, 523479608}, {3900000, 526371098}, {3910000, 528346917}, {3920000, 530429718}, {3930000, 532416098}, {3940000, 536207948}, {3950000, 538197406}, {3960000, 540293187}, {3970000, 542186937}, {3980000, 546179308}, {3990000, 548162097}, {4000000, 560247938}};

int main()
{
    // freopen("4.out", "w", stdout);
    int n;
    cin >> n;
    if (n <= 10)
    {
        cout << n;
        return 0;
    }
    int i = 1;
    for (auto xx : dp)
    {
        if (n > xx.first)
        {
            i = xx.second + 1;
            cnt = xx.first;
        }
        else if (n == xx.first)
        {
            cout << xx.second;
            return 0;
        }
    }

    // cout << cnt << " " << i << endl;

    for (;; i++)
    {
        memset(vis, 0, sizeof(vis));
        int flag = 0;

        int t = i;

        while (t)
        {
            if (vis[t % 10] == 1)
            {
                flag = 1;
                break;
            }
            vis[t % 10] = 1;
            t /= 10;
        }
        if (!flag)
        {
            cnt++;
            // if (cnt % 10000 == 0)
            //     printf("{%d,%d},", cnt, i);
        };
        if (cnt == n)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}