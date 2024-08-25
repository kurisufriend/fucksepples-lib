#pragma once
#include <vector>
#include <string>


//enuf 4 hex->nip coding
//1(decimal) = 0x1(hex) = onegaishiplease(nip) = oneg(short nip[snip])
//69(decimal) = 0x45(hex) = kawaii-utearigato(nip) = kawaarig(snip)
//420(dec) = 0x1A4(hex) = desuimoutokawaii-ute(nip) = desuimoukawa(snip)
//as you can see, this will revolutionize numerical encoding
//btw break on first space for all digit codes; following characters are flavor comments
const std::vector<std::string> niphash_coding = 
{
    "desu",
    "onegaishiplease",
    "gomenasorry",
    "kakko-ool",
    "kawaii-ute",
    "arigato",
    "tanoshii",
    "sorrymasen",
    "hai (means yes in japanese LOL!)",
    "ohayou (wisconsin!)",
    "imouto (little shit)",
    "onee (bigger shit)",
    "okaa (rabu)",
    "JS (prime)",
    "JC (clearance)",
    "JK (hag)",
    "rorikon (aka me)"
};

const std::vector<std::string> kaomoji_joy
{
    "(* ^ ω ^)",
    "(´ ∀ ` *)",
    "٩(◕‿◕｡)۶",
    "☆*:.｡.o(≧▽≦)o.｡.:*☆",
    "(o^▽^o)",
    "(⌒▽⌒)☆",
    "<(￣︶￣)>",
    "。.:☆*:･'(*⌒―⌒*)))",
    "ヽ(・∀・)ﾉ",
    "(´｡• ω •｡`)",
    "(￣ω￣)",
    "｀;:゛;｀;･(°ε° )",
    "(o･ω･o)",
    "(＠＾◡＾)",
    "ヽ(*・ω・)ﾉ",
    "(o_ _)ﾉ彡☆",
    "(^人^)",
    "(o´▽`o)",
    "(*´▽`*)",
    "｡ﾟ( ﾟ^∀^ﾟ)ﾟ｡",
    "( ´ ω ` )",
    "(((o(*°▽°*)o)))",
    "(≧◡≦)",
    "(o´∀`o)",
    "(´• ω •`)",
    "(＾▽＾)",
    "(⌒ω⌒)",
    "∑d(°∀°d)",
    "╰(▔∀▔)╯",
    "(─‿‿─)",
    "(*^‿^*)",
    "ヽ(o^ ^o)ﾉ",
    "(✯◡✯)",
    "(◕‿◕)",
    "(*≧ω≦*)",
    "(☆▽☆)",
    "(⌒‿⌒)",
    "＼(≧▽≦)／",
    "ヽ(o＾▽＾o)ノ",
    "☆ ～('▽^人)",
    "(*°▽°*)",
    "٩(｡•́‿•̀｡)۶",
    "(✧ω✧)",
    "ヽ(*⌒▽⌒*)ﾉ",
    "(´｡• ᵕ •｡`)",
    "( ´ ▽ ` )",
    "(￣▽￣)",
    "╰(*´︶`*)╯",
    "ヽ(>∀<☆)ノ",
    "o(≧▽≦)o",
    "(☆ω☆)",
    "(っ˘ω˘ς )",
    "＼(￣▽￣)／",
    "(*¯︶¯*)",
    "＼(＾▽＾)／",
    "٩(◕‿◕)۶",
    "(o˘◡˘o)",
    "\\(★ω★)/",
    "\\(^ヮ^)/",
    "(〃＾▽＾〃)",
    "(╯✧▽✧)╯",
    "o(>ω<)o",
    "o( ❛ᴗ❛ )o",
    "｡ﾟ(TヮT)ﾟ｡",
    "( ‾́ ◡ ‾́ )",
    "(ﾉ´ヮ`)ﾉ*: ･ﾟ",
    "(b ᵔ▽ᵔ)b",
    "(๑˃ᴗ˂)ﻭ",
    "(๑˘︶˘๑)",
    "( ˙꒳​˙ )",
    "(*꒦ິ꒳꒦ີ)",
    "°˖✧◝(⁰▿⁰)◜✧˖°",
    "(´･ᴗ･ ` )",
    "(ﾉ◕ヮ◕)ﾉ*:･ﾟ✧",
    "(„• ֊ •„)",
    "(.❛ ᴗ ❛.)",
    "(⁀ᗢ⁀)",
    "(￢‿￢ )",
    "(¬‿¬ )",
    "(*￣▽￣)b",
    "( ˙▿˙ )",
    "(¯▿¯)",
    "( ◕▿◕ )",
    "＼(٥⁀▽⁀ )／",
    "(„• ᴗ •„)",
    "(ᵔ◡ᵔ)",
    "( ´ ▿ ` )",
    "(๑>◡<๑)",
    "( = ⩊ = )",
    "( ´ ꒳ ` )",
    "⸜( ´ ꒳ ` )⸝",
    "⸜(⸝⸝⸝´꒳`⸝⸝⸝)⸝",
    "⸜(*ˊᗜˋ*)⸝",
    "⸜( *ˊᵕˋ* )⸝",
    "(>⩊<)",
    "(ᗒ⩊ᗕ)",
    "(ᵔ⩊ᵔ)",
    "( ᵔ ⩊ ᵔ )",
    "(•⩊•)",
    "( • ⩊ • )"
};

const std::vector<std::string> kaomoji_love
{
    "(ﾉ´ з `)ノ",
    "(♡μ_μ)",
    "(*^^*)♡",
    "☆⌒ヽ(*'､^*)chu",
    "(♡-_-♡)",
    "(￣ε￣＠)",
    "ヽ(♡‿♡)ノ",
    "( ´ ∀ `)ノ～ ♡",
    "(─‿‿─)♡",
    "(´｡• ᵕ •｡`) ♡",
    "(*♡∀♡)",
    "(｡・//ε//・｡)",
    "(´ ω `♡)",
    "♡( ◡‿◡ )",
    "(◕‿◕)♡",
    "(/▽＼*)｡o○♡",
    "(ღ˘⌣˘ღ)",
    "(♡°▽°♡)",
    "♡(｡- ω -)",
    "♡ ～('▽^人)",
    "(´• ω •`) ♡",
    "(´ ε ` )♡",
    "(´｡• ω •｡`) ♡",
    "( ´ ▽ ` ).｡ｏ♡",
    "╰(*´︶`*)╯♡",
    "(*˘︶˘*).｡.:*♡",
    "(♡˙︶˙♡)",
    "♡＼(￣▽￣)／♡",
    "(≧◡≦) ♡",
    "(⌒▽⌒)♡",
    "(*¯ ³¯*)♡",
    "(っ˘з(˘⌣˘ ) ♡",
    "♡ (˘▽˘>ԅ( ˘⌣˘)",
    "( ˘⌣˘)♡(˘⌣˘ )",
    "(/^-^(^ ^*)/ ♡",
    "٩(♡ε♡)۶",
    "σ(≧ε≦σ) ♡",
    "♡ (⇀ 3 ↼)",
    "♡ (￣З￣)",
    "(❤ω❤)",
    "(˘∀˘)/(μ‿μ) ❤",
    "❤ (ɔˆз(ˆ⌣ˆc)",
    "(´♡‿♡`)",
    "(°◡°♡)",
    "Σ>―(〃°ω°〃)♡→",
    "(´,,•ω•,,)♡",
    "(´꒳`)♡",
    "♡(>ᴗ•)",
    "(❤⩊❤)[=_=](☆ε☆)"
};

const std::vector<std::string> kaomoji_embarrassment
{
    "(⌒_⌒;)",
    "(o^ ^o)",
    "(*/ω＼)",
    "(*/。＼)",
    "(*/_＼)",
    "(*ﾉωﾉ)",
    "(o-_-o)",
    "(*μ_μ)",
    "( ◡‿◡ *)",
    "(ᵔ.ᵔ)",
    "(*ﾉ∀`*)",
    "(//▽//)",
    "(//ω//)",
    "(ノ*°▽°*)",
    "(*^.^*)",
    "(*ﾉ▽ﾉ)",
    "(￣▽￣*)ゞ",
    "(⁄ ⁄•⁄ω⁄•⁄ ⁄)",
    "(*/▽＼*)",
    "(⁄ ⁄>⁄ ▽ ⁄<⁄ ⁄)",
    "(„ಡωಡ„)",
    "(ง ื▿ ื)ว",
    "( 〃▽〃)",
    "(/▿＼ )",
    "(///￣ ￣///)"
};

const std::vector<std::string> kaomoji_sympathy
{
    "(ノ_<。)ヾ(´ ▽ ` )",
    "｡･ﾟ･(ﾉД`)ヽ(￣ω￣ )",
    "ρ(- ω -、)ヾ(￣ω￣; )",
    "ヽ(￣ω￣(。。 )ゝ",
    "(*´ I `)ﾉﾟ(ﾉД｀ﾟ)ﾟ｡",
    "ヽ(~_~(・_・ )ゝ",
    "(ﾉ_；)ヾ(´ ∀ ` )",
    "(; ω ; )ヾ(´∀`* )",
    "(*´ー)ﾉ(ノд`)",
    "(´-ω-`( _ _ )",
    "(っ´ω`)ﾉ(╥ω╥)",
    "(ｏ・_・)ノ”(ノ_<、)"
};


const std::vector<std::string> kaomoji_dissatisfaction
{
    "(＃＞＜)",
    "(；⌣̀_⌣́)",
    "☆ｏ(＞＜；)○",
    "(￣ ￣|||)",
    "(；￣Д￣)",
    "(￣□￣」)",
    "(＃￣0￣)",
    "(＃￣ω￣)",
    "(￢_￢;)",
    "(＞ｍ＜)",
    "(」°ロ°)」",
    "(〃＞＿＜;〃)",
    "(＾＾＃)",
    "(︶︹︺)",
    "(￣ヘ￣)",
    "<(￣ ﹌ ￣)>",
    "(￣︿￣)",
    "(＞﹏＜)",
    "(--_--)",
    "凸(￣ヘ￣)",
    "ヾ( ￣O￣)ツ",
    "(⇀‸↼‶)",
    "o(>< )o",
    "(」＞＜)」",
    "(ᗒᗣᗕ)՞",
    "(눈_눈)"
};

const std::vector<std::string> kaomoji_anger
{
    "(＃`Д´)",
    "(`皿´＃)",
    "( ` ω ´ )",
    "ヽ( `д´*)ノ",
    "(・`ω´・)",
    "(`ー´)",
    "ヽ(`⌒´メ)ノ",
    "凸(`△´＃)",
    "( `ε´ )",
    "ψ( ` ∇ ´ )ψ",
    "ヾ(`ヘ´)ﾉﾞ",
    "ヽ(‵﹏´)ノ",
    "(ﾒ` ﾛ ´)",
    "(╬`益´)",
    "┌∩┐(◣_◢)┌∩┐",
    "凸( ` ﾛ ´ )凸",
    "Σ(▼□▼メ)",
    "(°ㅂ°╬)",
    "ψ(▼へ▼メ)～→",
    "(ノ°益°)ノ",
    "(҂ `з´ )",
    "(‡▼益▼)",
    "(҂` ﾛ ´)凸",
    "((╬◣﹏◢))",
    "٩(╬ʘ益ʘ╬)۶",
    "(╬ Ò﹏Ó)",
    "＼＼٩(๑`^´๑)۶／／",
    "(凸ಠ益ಠ)凸",
    "↑_(ΦwΦ)Ψ",
    "←~(Ψ▼ｰ▼)∈",
    "୧((#Φ益Φ#))୨",
    "٩(ఠ益ఠ)۶",
    "(ﾉಥ益ಥ)ﾉ",
    "(≖､≖╬)"
};

const std::vector<std::string> kaomoji_sadness
{
    "(ノ_<。)",
    "(-_-)",
    "(´-ω-`)",
    ".･ﾟﾟ･(／ω＼)･ﾟﾟ･.",
    "(μ_μ)",
    "(ﾉД`)",
    "(-ω-、)",
    "。゜゜(´Ｏ`) ゜゜。",
    "o(TヘTo)",
    "( ; ω ; )",
    "(｡╯︵╰｡)",
    "｡･ﾟﾟ*(>д<)*ﾟﾟ･｡",
    "( ﾟ，_ゝ｀)",
    "(个_个)",
    "(╯︵╰,)",
    "｡･ﾟ(ﾟ><ﾟ)ﾟ･｡",
    "( ╥ω╥ )",
    "(╯_╰)",
    "(╥_╥)",
    ".｡･ﾟﾟ･(＞_＜)･ﾟﾟ･｡.",
    "(／ˍ・、)",
    "(ノ_<、)",
    "(╥﹏╥)",
    "｡ﾟ(｡ﾉωヽ｡)ﾟ｡",
    "(つω`｡)",
    "(｡T ω T｡)",
    "(ﾉω･､)",
    "･ﾟ･(｡>ω<｡)･ﾟ･",
    "(T_T)",
    "(>_<)",
    "(っ˘̩╭╮˘̩)っ",
    "｡ﾟ･ (>﹏<) ･ﾟ｡",
    "o(〒﹏〒)o",
    "(｡•́︿•̀｡)",
    "(ಥ﹏ಥ)",
    "(ಡ‸ಡ)"
};

const std::vector<std::string> kaomoji_pain
{
    "~(>_<~)",
    "☆⌒(> _ <)",
    "☆⌒(>。<)",
    "(☆_@)",
    "(×_×)",
    "(x_x)",
    "(×_×)⌒☆",
    "(x_x)⌒☆",
    "(×﹏×)",
    "☆(＃××)",
    "(＋_＋)",
    "[ ± _ ± ]",
    "٩(× ×)۶",
    "_:(´ཀ`」 ∠):_",
    "(ﾒ﹏ﾒ)"
};

const std::vector<std::string> kaomoji_fear
{
    "(ノωヽ)",
    "(／。＼)",
    "(ﾉ_ヽ)",
    "..・ヾ(。＞＜)シ",
    "(″ロ゛)",
    "(;;;*_*)",
    "(・人・)",
    "＼(〇_ｏ)／",
    "(/ω＼)",
    "(/_＼)",
    "〜(＞＜)〜",
    "Σ(°△°|||)︴",
    "(((＞＜)))",
    "{{ (>_<) }}",
    "＼(º □ º l|l)/",
    "〣( ºΔº )〣",
    "▓▒░(°◡°)░▒▓"
};

const std::vector<std::string> kaomoji_indifference
{
    "ヽ(ー_ー )ノ",
    "ヽ(´ー` )┌",
    "┐(‘～` )┌",
    "ヽ(　￣д￣)ノ",
    "┐(￣ヘ￣)┌",
    "ヽ(￣～￣　)ノ",
    "╮(￣_￣)╭",
    "ヽ(ˇヘˇ)ノ",
    "┐(￣～￣)┌",
    "┐(︶▽︶)┌",
    "╮(￣～￣)╭",
    "¯\\_(ツ)_/¯",
    "┐( ´ д ` )┌",
    "╮(︶︿︶)╭",
    "┐(￣∀￣)┌",
    "┐( ˘ ､ ˘ )┌",
    "╮(︶▽︶)╭",
    "╮( ˘ ､ ˘ )╭",
    "┐( ˘_˘ )┌",
    "╮( ˘_˘ )╭",
    "┐(￣ヮ￣)┌",
    "ᕕ( ᐛ )ᕗ",
    "┐(シ)┌"
};

const std::vector<std::string> kaomoji_confusion
{
    "(￣ω￣;)",
    "σ(￣、￣〃)",
    "(￣～￣;)",
    "(-_-;)・・・",
    "┐('～`;)┌",
    "(・_・ヾ",
    "(〃￣ω￣〃ゞ",
    "┐(￣ヘ￣;)┌",
    "(・_・;)",
    "(￣_￣)・・・",
    "╮(￣ω￣;)╭",
    "(¯ . ¯;)",
    "(＠_＠)",
    "(・・;)ゞ",
    "Σ(￣。￣ﾉ)",
    "(・・ ) ?",
    "(•ิ_•ิ)?",
    "(◎ ◎)ゞ",
    "(ーー;)",
    "ლ(ಠ_ಠ ლ)",
    "ლ(¯ロ¯\"ლ)",
    "(¯ . ¯٥)",
    "(¯ ¯٥)"
};

const std::vector<std::string> kaomoji_doubt
{
    "(￢_￢)",
    "(→_→)",
    "(￢ ￢)",
    "(￢‿￢ )",
    "(¬_¬ )",
    "(←_←)",
    "(¬ ¬ )",
    "(¬‿¬ )",
    "(↼_↼)",
    "(⇀_⇀)",
    "(ᓀ ᓀ)",
    "(„¬ᴗ¬„)"
};

const std::vector<std::string> kaomoji_surprise
{
  "w(°ｏ°)w",
  "ヽ(°〇°)ﾉ",
  "Σ(O_O)",
  "Σ(°ロ°)",
  "(⊙_⊙)",
  "(o_O)",
  "(O_O;)",
  "(O.O)",
  "(°ロ°) !",
  "(o_O) !",
  "(□_□)",
  "Σ(□_□)",
  "∑(O_O;)",
  "( : ౦ ‸ ౦ : )"
};

