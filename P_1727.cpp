#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    string pai =
        "1415926535897932384626433832795028841971693993751058209749445923078164"
        "0628620899862803482534211706798214808651328230664709384460955058223172"
        "5359408128481117450284102701938521105559644622948954930381964428810975"
        "6659334461284756482337867831652712019091456485669234603486104543266482"
        "1339360726024914127372458700660631558817488152092096282925409171536436"
        "7892590360011330530548820466521384146951941511609433057270365759591953"
        "0921861173819326117931051185480744623799627495673518857527248912279381"
        "8301194912983367336244065664308602139494639522473719070217986094370277"
        "0539217176293176752384674818467669405132000568127145263560827785771342"
        "7577896091736371787214684409012249534301465495853710507922796892589235"
        "4201995611212902196086403441815981362977477130996051870721134999999837"
        "2978049951059731732816096318595024459455346908302642522308253344685035"
        "2619311881710100031378387528865875332083814206171776691473035982534904"
        "2875546873115956286388235378759375195778185778053217122680661300192787"
        "6611195909216420198938095257201065485863278865936153381827968230301952"
        "0353018529689957736225994138912497217752834791315155748572424541506959"
        "5082953311686172785588907509838175463746493931925506040092770167113900"
        "9848824012858361603563707660104710181942955596198946767837449448255379"
        "7747268471040475346462080466842590694912933136770289891521047521620569"
        "6602405803815019351125338243003558764024749647326391419927260426992279"
        "6782354781636009341721641219924586315030286182974555706749838505494588"
        "5869269956909272107975093029553211653449872027559602364806654991198818"
        "3479775356636980742654252786255181841757467289097777279380008164706001"
        "6145249192173217214772350141441973568548161361157352552133475741849468"
        "4385233239073941433345477624168625189835694855620992192221842725502542"
        "5688767179049460165346680498862723279178608578438382796797668145410095"
        "3883786360950680064225125205117392984896084128488626945604241965285022"
        "2106611863067442786220391949450471237137869609563643719172874677646575"
        "7396241389086583264599581339047802759009946576407895126946839835259570"
        "9825822620522489407726719478268482601476990902640136394437455305068203"
        "4962524517493996514314298091906592509372216964615157098583874105978859"
        "5977297549893016175392846813826868386894277415599185592524595395943104"
        "9972524680845987273644695848653836736222626099124608051243884390451244"
        "1365497627807977156914359977001296160894416948685558484063534220722258"
        "2848864815845602850601684273945226746767889525213852254995466672782398"
        "6456596116354886230577456498035593634568174324112515076069479451096596"
        "0940252288797108931456691368672287489405601015033086179286809208747609"
        "1782493858900971490967598526136554978189312978482168299894872265880485"
        "7564014270477555132379641451523746234364542858444795265867821051141354"
        "7357395231134271661021359695362314429524849371871101457654035902799344"
        "0374200731057853906219838744780847848968332144571386875194350643021845"
        "3191048481005370614680674919278191197939952061419663428754440643745123"
        "7181921799983910159195618146751426912397489409071864942319615679452080"
        "9514655022523160388193014209376213785595663893778708303906979207734672"
        "2182562599661501421503068038447734549202605414665925201497442850732518"
        "6660021324340881907104863317346496514539057962685610055081066587969981"
        "6357473638405257145910289706414011097120628043903975951567715770042033"
        "7869936007230558763176359421873125147120532928191826186125867321579198"
        "4148488291644706095752706957220917567116722910981690915280173506712748"
        "5832228718352093539657251210835791513698820914442100675103346711031412"
        "6711136990865851639831501970165151168517143765761835155650884909989859"
        "9823873455283316355076479185358932261854896321329330898570642046752590"
        "7091548141654985946163718027098199430992448895757128289059232332609729"
        "9712084433573265489382391193259746366730583604142813883032038249037589"
        "8524374417029132765618093773444030707469211201913020330380197621101100"
        "4492932151608424448596376698389522868478312355265821314495768572624334"
        "4189303968642624341077322697802807318915441101044682325271620105265227"
        "2111660396665573092547110557853763466820653109896526918620564769312570"
        "5863566201855810072936065987648611791045334885034611365768675324944166"
        "8039626579787718556084552965412665408530614344431858676975145661406800"
        "7002378776591344017127494704205622305389945613140711270004078547332699"
        "3908145466464588079727082668306343285878569830523580893306575740679545"
        "7163775254202114955761581400250126228594130216471550979259230990796547"
        "3761255176567513575178296664547791745011299614890304639947132962107340"
        "4375189573596145890193897131117904297828564750320319869151402870808599"
        "0480109412147221317947647772622414254854540332157185306142288137585043"
        "0633217518297986622371721591607716692547487389866549494501146540628433"
        "6639379003976926567214638530673609657120918076383271664162748888007869"
        "2560290228472104031721186082041900042296617119637792133757511495950156"
        "6049631862947265473642523081770367515906735023507283540567040386743513"
        "6222247715891504953098444893330963408780769325993978054193414473774418"
        "4263129860809988868741326047215695162396586457302163159819319516735381"
        "2974167729478672422924654366800980676928238280689964004824354037014163"
        "1496589794092432378969070697794223625082216889573837986230015937764716"
        "5122893578601588161755782973523344604281512627203734314653197777416031"
        "9906655418763979293344195215413418994854447345673831624993419131814809"
        "2777710386387734317720754565453220777092120190516609628049092636019759"
        "8828161332316663652861932668633606273567630354477628035045077723554710"
        "5859548702790814356240145171806246436267945612753181340783303362542327"
        "8394497538243720583531147711992606381334677687969597030983391307710987"
        "0408591337464144282277263465947047458784778720192771528073176790770715"
        "7213444730605700733492436931138350493163128404251219256517980694113528"
        "0131470130478164378851852909285452011658393419656213491434159562586586"
        "5570552690496520985803385072242648293972858478316305777756068887644624"
        "8246857926039535277348030480290058760758251047470916439613626760449256"
        "2742042083208566119062545433721315359584506877246029016187667952406163"
        "4252257719542916299193064553779914037340432875262888963995879475729174"
        "6426357455254079091451357111369410911939325191076020825202618798531887"
        "7058429725916778131496990090192116971737278476847268608490033770242429"
        "1651300500516832336435038951702989392233451722013812806965011784408745"
        "1960121228599371623130171144484640903890644954440061986907548516026327"
        "5052983491874078668088183385102283345085048608250393021332197155184306"
        "3545500766828294930413776552793975175461395398468339363830474611996653"
        "8581538420568533862186725233402830871123282789212507712629463229563989"
        "8989358211674562701021835646220134967151881909730381198004973407239610"
        "3685406643193950979019069963955245300545058068550195673022921913933918"
        "5680344903982059551002263535361920419947455385938102343955449597783779"
        "0237421617271117236434354394782218185286240851400666044332588856986705"
        "4315470696574745855033232334210730154594051655379068662733379958511562"
        "5784322988273723198987571415957811196358330059408730681216028764962867"
        "4460477464915995054973742562690104903778198683593814657412680492564879"
        "8556145372347867330390468838343634655379498641927056387293174872332083"
        "7601123029911367938627089438799362016295154133714248928307220126901475"
        "4668476535761647737946752004907571555278196536213239264061601363581559"
        "0742202020318727760527721900556148425551879253034351398442532234157623"
        "3610642506390497500865627109535919465897514131034822769306247435363256"
        "9160781547818115284366795706110861533150445212747392454494542368288606"
        "1340841486377670096120715124914043027253860764823634143346235189757664"
        "5216413767969031495019108575984423919862916421939949072362346468441173"
        "9403265918404437805133389452574239950829659122850855582157250310712570"
        "1266830240292952522011872676756220415420516184163484756516999811614101"
        "0029960783869092916030288400269104140792886215078424516709087000699282"
        "1206604183718065355672525325675328612910424877618258297651579598470356"
        "2226293486003415872298053498965022629174878820273420922224533985626476"
        "6914905562842503912757710284027998066365825488926488025456610172967026"
        "6407655904290994568150652653053718294127033693137851786090407086671149"
        "6558343434769338578171138645587367812301458768712660348913909562009939"
        "3610310291616152881384379099042317473363948045759314931405297634757481"
        "1935670911013775172100803155902485309066920376719220332290943346768514"
        "2214477379393751703443661991040337511173547191855046449026365512816228"
        "8244625759163330391072253837421821408835086573917715096828874782656995"
        "9957449066175834413752239709683408005355984917541738188399944697486762"
        "6551658276584835884531427756879002909517028352971634456212964043523117"
        "6006651012412006597558512761785838292041974844236080071930457618932349"
        "2292796501987518721272675079812554709589045563579212210333466974992356"
        "3025494780249011419521238281530911407907386025152274299581807247162591"
        "6685451333123948049470791191532673430282441860414263639548000448002670"
        "4962482017928964766975831832713142517029692348896276684403232609275249"
        "6035799646925650493681836090032380929345958897069536534940603402166544"
        "3755890045632882250545255640564482465151875471196218443965825337543885"
        "6909411303150952617937800297412076651479394259029896959469955657612186"
        "5619673378623625612521632086286922210327488921865436480229678070576561"
        "5144632046927906821207388377814233562823608963208068222468012248261177"
        "1858963814091839036736722208883215137556003727983940041529700287830766"
        "7094447456013455641725437090697939612257142989467154357846878861444581"
        "2314593571984922528471605049221242470141214780573455105008019086996033"
        "0276347870810817545011930714122339086639383395294257869050764310063835"
        "1983438934159613185434754649556978103829309716465143840700707360411237"
        "3599843452251610507027056235266012764848308407611830130527932054274628"
        "6540360367453286510570658748822569815793678976697422057505968344086973"
        "5020141020672358502007245225632651341055924019027421624843914035998953"
        "5394590944070469120914093870012645600162374288021092764579310657922955"
        "249887275846101264836999892256959688159205600101655256375678";

    int n;
    cin >> n;
    puts("3.");
    for (int i = 1; i <= n; ++i) {
        putchar(pai[i - 1]);
        if (i % 50 == 0)
            putchar('\n');
        else if (i % 10 == 0)
            putchar(' ');
    }

    return 0;
}
