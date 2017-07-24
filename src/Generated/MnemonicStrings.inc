static const char* mnemonicStrings[] =
{
    /*0000*/ "invalid",
    /*0001*/ "aaa",
    /*0002*/ "aad",
    /*0003*/ "aam",
    /*0004*/ "aas",
    /*0005*/ "adc",
    /*0006*/ "adcx",
    /*0007*/ "add",
    /*0008*/ "addpd",
    /*0009*/ "addps",
    /*000A*/ "addsd",
    /*000B*/ "addss",
    /*000C*/ "addsubpd",
    /*000D*/ "addsubps",
    /*000E*/ "adox",
    /*000F*/ "aesdec",
    /*0010*/ "aesdeclast",
    /*0011*/ "aesenc",
    /*0012*/ "aesenclast",
    /*0013*/ "aesimc",
    /*0014*/ "aeskeygenassist",
    /*0015*/ "and",
    /*0016*/ "andn",
    /*0017*/ "andnpd",
    /*0018*/ "andnps",
    /*0019*/ "andpd",
    /*001A*/ "andps",
    /*001B*/ "arpl",
    /*001C*/ "bextr",
    /*001D*/ "bextr_xop",
    /*001E*/ "blcfill",
    /*001F*/ "blci",
    /*0020*/ "blcic",
    /*0021*/ "blcmsk",
    /*0022*/ "blcs",
    /*0023*/ "blendpd",
    /*0024*/ "blendps",
    /*0025*/ "blendvpd",
    /*0026*/ "blendvps",
    /*0027*/ "blsfill",
    /*0028*/ "blsi",
    /*0029*/ "blsic",
    /*002A*/ "blsmsk",
    /*002B*/ "blsr",
    /*002C*/ "bndcl",
    /*002D*/ "bndcn",
    /*002E*/ "bndcu",
    /*002F*/ "bndldx",
    /*0030*/ "bndmk",
    /*0031*/ "bndmov",
    /*0032*/ "bndstx",
    /*0033*/ "bound",
    /*0034*/ "bsf",
    /*0035*/ "bsr",
    /*0036*/ "bswap",
    /*0037*/ "bt",
    /*0038*/ "btc",
    /*0039*/ "btr",
    /*003A*/ "bts",
    /*003B*/ "bzhi",
    /*003C*/ "call",
    /*003D*/ "call_far",
    /*003E*/ "cbw",
    /*003F*/ "cdq",
    /*0040*/ "cdqe",
    /*0041*/ "clac",
    /*0042*/ "clc",
    /*0043*/ "cld",
    /*0044*/ "clevict0",
    /*0045*/ "clevict1",
    /*0046*/ "clflush",
    /*0047*/ "clflushopt",
    /*0048*/ "clgi",
    /*0049*/ "cli",
    /*004A*/ "clrssbsy",
    /*004B*/ "clts",
    /*004C*/ "clwb",
    /*004D*/ "clzero",
    /*004E*/ "cmc",
    /*004F*/ "cmovb",
    /*0050*/ "cmovbe",
    /*0051*/ "cmovl",
    /*0052*/ "cmovle",
    /*0053*/ "cmovnb",
    /*0054*/ "cmovnbe",
    /*0055*/ "cmovnl",
    /*0056*/ "cmovnle",
    /*0057*/ "cmovno",
    /*0058*/ "cmovnp",
    /*0059*/ "cmovns",
    /*005A*/ "cmovnz",
    /*005B*/ "cmovo",
    /*005C*/ "cmovp",
    /*005D*/ "cmovs",
    /*005E*/ "cmovz",
    /*005F*/ "cmp",
    /*0060*/ "cmppd",
    /*0061*/ "cmpps",
    /*0062*/ "cmpsb",
    /*0063*/ "cmpsd",
    /*0064*/ "cmpsq",
    /*0065*/ "cmpss",
    /*0066*/ "cmpsw",
    /*0067*/ "cmpxchg",
    /*0068*/ "cmpxchg16b",
    /*0069*/ "cmpxchg8b",
    /*006A*/ "comisd",
    /*006B*/ "comiss",
    /*006C*/ "cpuid",
    /*006D*/ "cqo",
    /*006E*/ "crc32",
    /*006F*/ "cvtdq2pd",
    /*0070*/ "cvtdq2ps",
    /*0071*/ "cvtpd2dq",
    /*0072*/ "cvtpd2pi",
    /*0073*/ "cvtpd2ps",
    /*0074*/ "cvtpi2pd",
    /*0075*/ "cvtpi2ps",
    /*0076*/ "cvtps2dq",
    /*0077*/ "cvtps2pd",
    /*0078*/ "cvtps2pi",
    /*0079*/ "cvtsd2si",
    /*007A*/ "cvtsd2ss",
    /*007B*/ "cvtsi2sd",
    /*007C*/ "cvtsi2ss",
    /*007D*/ "cvtss2sd",
    /*007E*/ "cvtss2si",
    /*007F*/ "cvttpd2dq",
    /*0080*/ "cvttpd2pi",
    /*0081*/ "cvttps2dq",
    /*0082*/ "cvttps2pi",
    /*0083*/ "cvttsd2si",
    /*0084*/ "cvttss2si",
    /*0085*/ "cwd",
    /*0086*/ "cwde",
    /*0087*/ "daa",
    /*0088*/ "das",
    /*0089*/ "dec",
    /*008A*/ "delay",
    /*008B*/ "div",
    /*008C*/ "divpd",
    /*008D*/ "divps",
    /*008E*/ "divsd",
    /*008F*/ "divss",
    /*0090*/ "dppd",
    /*0091*/ "dpps",
    /*0092*/ "emms",
    /*0093*/ "encls",
    /*0094*/ "enclu",
    /*0095*/ "endbr32",
    /*0096*/ "endbr64",
    /*0097*/ "enter",
    /*0098*/ "extractps",
    /*0099*/ "f2xm1",
    /*009A*/ "fabs",
    /*009B*/ "fadd",
    /*009C*/ "faddp",
    /*009D*/ "fbld",
    /*009E*/ "fbstp",
    /*009F*/ "fchs",
    /*00A0*/ "fcmovb",
    /*00A1*/ "fcmovbe",
    /*00A2*/ "fcmove",
    /*00A3*/ "fcmovnb",
    /*00A4*/ "fcmovnbe",
    /*00A5*/ "fcmovne",
    /*00A6*/ "fcmovnu",
    /*00A7*/ "fcmovu",
    /*00A8*/ "fcom",
    /*00A9*/ "fcomi",
    /*00AA*/ "fcomip",
    /*00AB*/ "fcomp",
    /*00AC*/ "fcompp",
    /*00AD*/ "fcos",
    /*00AE*/ "fdecstp",
    /*00AF*/ "fdisi8087_nop",
    /*00B0*/ "fdiv",
    /*00B1*/ "fdivp",
    /*00B2*/ "fdivr",
    /*00B3*/ "fdivrp",
    /*00B4*/ "femms",
    /*00B5*/ "feni8087_nop",
    /*00B6*/ "ffree",
    /*00B7*/ "ffreep",
    /*00B8*/ "fiadd",
    /*00B9*/ "ficom",
    /*00BA*/ "ficomp",
    /*00BB*/ "fidiv",
    /*00BC*/ "fidivr",
    /*00BD*/ "fild",
    /*00BE*/ "fimul",
    /*00BF*/ "fincstp",
    /*00C0*/ "fist",
    /*00C1*/ "fistp",
    /*00C2*/ "fisttp",
    /*00C3*/ "fisub",
    /*00C4*/ "fisubr",
    /*00C5*/ "fld",
    /*00C6*/ "fld1",
    /*00C7*/ "fldcw",
    /*00C8*/ "fldenv",
    /*00C9*/ "fldl2e",
    /*00CA*/ "fldl2t",
    /*00CB*/ "fldlg2",
    /*00CC*/ "fldln2",
    /*00CD*/ "fldpi",
    /*00CE*/ "fldz",
    /*00CF*/ "fmul",
    /*00D0*/ "fmulp",
    /*00D1*/ "fnclex",
    /*00D2*/ "fninit",
    /*00D3*/ "fnop",
    /*00D4*/ "fnsave",
    /*00D5*/ "fnstcw",
    /*00D6*/ "fnstenv",
    /*00D7*/ "fnstsw",
    /*00D8*/ "fpatan",
    /*00D9*/ "fprem",
    /*00DA*/ "fprem1",
    /*00DB*/ "fptan",
    /*00DC*/ "frndint",
    /*00DD*/ "frstor",
    /*00DE*/ "fscale",
    /*00DF*/ "fsetpm287_nop",
    /*00E0*/ "fsin",
    /*00E1*/ "fsincos",
    /*00E2*/ "fsqrt",
    /*00E3*/ "fst",
    /*00E4*/ "fstp",
    /*00E5*/ "fstpnce",
    /*00E6*/ "fsub",
    /*00E7*/ "fsubp",
    /*00E8*/ "fsubr",
    /*00E9*/ "fsubrp",
    /*00EA*/ "ftst",
    /*00EB*/ "fucom",
    /*00EC*/ "fucomi",
    /*00ED*/ "fucomip",
    /*00EE*/ "fucomp",
    /*00EF*/ "fucompp",
    /*00F0*/ "fwait",
    /*00F1*/ "fxam",
    /*00F2*/ "fxch",
    /*00F3*/ "fxrstor",
    /*00F4*/ "fxrstor64",
    /*00F5*/ "fxsave",
    /*00F6*/ "fxsave64",
    /*00F7*/ "fxtract",
    /*00F8*/ "fyl2x",
    /*00F9*/ "fyl2xp1",
    /*00FA*/ "getsec",
    /*00FB*/ "haddpd",
    /*00FC*/ "haddps",
    /*00FD*/ "hlt",
    /*00FE*/ "hsubpd",
    /*00FF*/ "hsubps",
    /*0100*/ "idiv",
    /*0101*/ "imul",
    /*0102*/ "in",
    /*0103*/ "inc",
    /*0104*/ "incsspd",
    /*0105*/ "incsspq",
    /*0106*/ "insb",
    /*0107*/ "insd",
    /*0108*/ "insertps",
    /*0109*/ "insw",
    /*010A*/ "int",
    /*010B*/ "int1",
    /*010C*/ "int3",
    /*010D*/ "into",
    /*010E*/ "invd",
    /*010F*/ "invept",
    /*0110*/ "invlpg",
    /*0111*/ "invlpga",
    /*0112*/ "invpcid",
    /*0113*/ "invvpid",
    /*0114*/ "iret",
    /*0115*/ "iretd",
    /*0116*/ "iretq",
    /*0117*/ "jb",
    /*0118*/ "jbe",
    /*0119*/ "jcxz",
    /*011A*/ "jecxz",
    /*011B*/ "jknzd",
    /*011C*/ "jkzd",
    /*011D*/ "jl",
    /*011E*/ "jle",
    /*011F*/ "jmp",
    /*0120*/ "jmp_far",
    /*0121*/ "jnb",
    /*0122*/ "jnbe",
    /*0123*/ "jnl",
    /*0124*/ "jnle",
    /*0125*/ "jno",
    /*0126*/ "jnp",
    /*0127*/ "jns",
    /*0128*/ "jnz",
    /*0129*/ "jo",
    /*012A*/ "jp",
    /*012B*/ "jrcxz",
    /*012C*/ "js",
    /*012D*/ "jz",
    /*012E*/ "kaddb",
    /*012F*/ "kaddd",
    /*0130*/ "kaddq",
    /*0131*/ "kaddw",
    /*0132*/ "kand",
    /*0133*/ "kandb",
    /*0134*/ "kandd",
    /*0135*/ "kandn",
    /*0136*/ "kandnb",
    /*0137*/ "kandnd",
    /*0138*/ "kandnq",
    /*0139*/ "kandnr",
    /*013A*/ "kandnw",
    /*013B*/ "kandq",
    /*013C*/ "kandw",
    /*013D*/ "kconcath",
    /*013E*/ "kconcatl",
    /*013F*/ "kextract",
    /*0140*/ "kmerge2l1h",
    /*0141*/ "kmerge2l1l",
    /*0142*/ "kmov",
    /*0143*/ "kmovb",
    /*0144*/ "kmovd",
    /*0145*/ "kmovq",
    /*0146*/ "kmovw",
    /*0147*/ "knot",
    /*0148*/ "knotb",
    /*0149*/ "knotd",
    /*014A*/ "knotq",
    /*014B*/ "knotw",
    /*014C*/ "kor",
    /*014D*/ "korb",
    /*014E*/ "kord",
    /*014F*/ "korq",
    /*0150*/ "kortestb",
    /*0151*/ "kortestd",
    /*0152*/ "kortestq",
    /*0153*/ "kortestw",
    /*0154*/ "korw",
    /*0155*/ "kshiftlb",
    /*0156*/ "kshiftld",
    /*0157*/ "kshiftlq",
    /*0158*/ "kshiftlw",
    /*0159*/ "kshiftrb",
    /*015A*/ "kshiftrd",
    /*015B*/ "kshiftrq",
    /*015C*/ "kshiftrw",
    /*015D*/ "ktestb",
    /*015E*/ "ktestd",
    /*015F*/ "ktestq",
    /*0160*/ "ktestw",
    /*0161*/ "kunpckbw",
    /*0162*/ "kunpckdq",
    /*0163*/ "kunpckwd",
    /*0164*/ "kxnor",
    /*0165*/ "kxnorb",
    /*0166*/ "kxnord",
    /*0167*/ "kxnorq",
    /*0168*/ "kxnorw",
    /*0169*/ "kxor",
    /*016A*/ "kxorb",
    /*016B*/ "kxord",
    /*016C*/ "kxorq",
    /*016D*/ "kxorw",
    /*016E*/ "lahf",
    /*016F*/ "lar",
    /*0170*/ "lddqu",
    /*0171*/ "ldmxcsr",
    /*0172*/ "lds",
    /*0173*/ "lea",
    /*0174*/ "leave",
    /*0175*/ "les",
    /*0176*/ "lfence",
    /*0177*/ "lfs",
    /*0178*/ "lgdt",
    /*0179*/ "lgs",
    /*017A*/ "lidt",
    /*017B*/ "lldt",
    /*017C*/ "llwpcb",
    /*017D*/ "lmsw",
    /*017E*/ "lodsb",
    /*017F*/ "lodsd",
    /*0180*/ "lodsq",
    /*0181*/ "lodsw",
    /*0182*/ "loop",
    /*0183*/ "loope",
    /*0184*/ "loopne",
    /*0185*/ "lsl",
    /*0186*/ "lss",
    /*0187*/ "ltr",
    /*0188*/ "lwpins",
    /*0189*/ "lwpval",
    /*018A*/ "lzcnt",
    /*018B*/ "maskmovdqu",
    /*018C*/ "maskmovq",
    /*018D*/ "maxpd",
    /*018E*/ "maxps",
    /*018F*/ "maxsd",
    /*0190*/ "maxss",
    /*0191*/ "mfence",
    /*0192*/ "minpd",
    /*0193*/ "minps",
    /*0194*/ "minsd",
    /*0195*/ "minss",
    /*0196*/ "monitor",
    /*0197*/ "mov",
    /*0198*/ "movapd",
    /*0199*/ "movaps",
    /*019A*/ "movbe",
    /*019B*/ "movd",
    /*019C*/ "movddup",
    /*019D*/ "movdq2q",
    /*019E*/ "movdqa",
    /*019F*/ "movdqu",
    /*01A0*/ "movhlps",
    /*01A1*/ "movhpd",
    /*01A2*/ "movhps",
    /*01A3*/ "movlhps",
    /*01A4*/ "movlpd",
    /*01A5*/ "movlps",
    /*01A6*/ "movmskpd",
    /*01A7*/ "movmskps",
    /*01A8*/ "movntdq",
    /*01A9*/ "movntdqa",
    /*01AA*/ "movnti",
    /*01AB*/ "movntpd",
    /*01AC*/ "movntps",
    /*01AD*/ "movntq",
    /*01AE*/ "movq",
    /*01AF*/ "movq2dq",
    /*01B0*/ "movsb",
    /*01B1*/ "movsd",
    /*01B2*/ "movshdup",
    /*01B3*/ "movsldup",
    /*01B4*/ "movsq",
    /*01B5*/ "movss",
    /*01B6*/ "movsw",
    /*01B7*/ "movsx",
    /*01B8*/ "movsxd",
    /*01B9*/ "movupd",
    /*01BA*/ "movups",
    /*01BB*/ "movzx",
    /*01BC*/ "mpsadbw",
    /*01BD*/ "mul",
    /*01BE*/ "mulpd",
    /*01BF*/ "mulps",
    /*01C0*/ "mulsd",
    /*01C1*/ "mulss",
    /*01C2*/ "mulx",
    /*01C3*/ "mwait",
    /*01C4*/ "neg",
    /*01C5*/ "nop",
    /*01C6*/ "not",
    /*01C7*/ "or",
    /*01C8*/ "orpd",
    /*01C9*/ "orps",
    /*01CA*/ "out",
    /*01CB*/ "outsb",
    /*01CC*/ "outsd",
    /*01CD*/ "outsw",
    /*01CE*/ "pabsb",
    /*01CF*/ "pabsd",
    /*01D0*/ "pabsw",
    /*01D1*/ "packssdw",
    /*01D2*/ "packsswb",
    /*01D3*/ "packusdw",
    /*01D4*/ "packuswb",
    /*01D5*/ "paddb",
    /*01D6*/ "paddd",
    /*01D7*/ "paddq",
    /*01D8*/ "paddsb",
    /*01D9*/ "paddsw",
    /*01DA*/ "paddusb",
    /*01DB*/ "paddusw",
    /*01DC*/ "paddw",
    /*01DD*/ "palignr",
    /*01DE*/ "pand",
    /*01DF*/ "pandn",
    /*01E0*/ "pause",
    /*01E1*/ "pavgb",
    /*01E2*/ "pavgusb",
    /*01E3*/ "pavgw",
    /*01E4*/ "pblendvb",
    /*01E5*/ "pblendw",
    /*01E6*/ "pclmulqdq",
    /*01E7*/ "pcmpeqb",
    /*01E8*/ "pcmpeqd",
    /*01E9*/ "pcmpeqq",
    /*01EA*/ "pcmpeqw",
    /*01EB*/ "pcmpestri",
    /*01EC*/ "pcmpestrm",
    /*01ED*/ "pcmpgtb",
    /*01EE*/ "pcmpgtd",
    /*01EF*/ "pcmpgtq",
    /*01F0*/ "pcmpgtw",
    /*01F1*/ "pcmpistri",
    /*01F2*/ "pcmpistrm",
    /*01F3*/ "pdep",
    /*01F4*/ "pext",
    /*01F5*/ "pextrb",
    /*01F6*/ "pextrd",
    /*01F7*/ "pextrq",
    /*01F8*/ "pextrw",
    /*01F9*/ "pf2id",
    /*01FA*/ "pf2iw",
    /*01FB*/ "pfacc",
    /*01FC*/ "pfadd",
    /*01FD*/ "pfcmpeq",
    /*01FE*/ "pfcmpge",
    /*01FF*/ "pfcmpgt",
    /*0200*/ "pfcpit1",
    /*0201*/ "pfmax",
    /*0202*/ "pfmin",
    /*0203*/ "pfmul",
    /*0204*/ "pfnacc",
    /*0205*/ "pfpnacc",
    /*0206*/ "pfrcp",
    /*0207*/ "pfrcpit2",
    /*0208*/ "pfrsqit1",
    /*0209*/ "pfsqrt",
    /*020A*/ "pfsub",
    /*020B*/ "pfsubr",
    /*020C*/ "phaddd",
    /*020D*/ "phaddsw",
    /*020E*/ "phaddw",
    /*020F*/ "phminposuw",
    /*0210*/ "phsubd",
    /*0211*/ "phsubsw",
    /*0212*/ "phsubw",
    /*0213*/ "pi2fd",
    /*0214*/ "pi2fw",
    /*0215*/ "pinsrb",
    /*0216*/ "pinsrd",
    /*0217*/ "pinsrq",
    /*0218*/ "pinsrw",
    /*0219*/ "pmaddubsw",
    /*021A*/ "pmaddwd",
    /*021B*/ "pmaxsb",
    /*021C*/ "pmaxsd",
    /*021D*/ "pmaxsw",
    /*021E*/ "pmaxub",
    /*021F*/ "pmaxud",
    /*0220*/ "pmaxuw",
    /*0221*/ "pminsb",
    /*0222*/ "pminsd",
    /*0223*/ "pminsw",
    /*0224*/ "pminub",
    /*0225*/ "pminud",
    /*0226*/ "pminuw",
    /*0227*/ "pmovmskb",
    /*0228*/ "pmovsxbd",
    /*0229*/ "pmovsxbq",
    /*022A*/ "pmovsxbw",
    /*022B*/ "pmovsxdq",
    /*022C*/ "pmovsxwd",
    /*022D*/ "pmovsxwq",
    /*022E*/ "pmovzxbd",
    /*022F*/ "pmovzxbq",
    /*0230*/ "pmovzxbw",
    /*0231*/ "pmovzxdq",
    /*0232*/ "pmovzxwd",
    /*0233*/ "pmovzxwq",
    /*0234*/ "pmuldq",
    /*0235*/ "pmulhrsw",
    /*0236*/ "pmulhrw",
    /*0237*/ "pmulhuw",
    /*0238*/ "pmulhw",
    /*0239*/ "pmulld",
    /*023A*/ "pmullw",
    /*023B*/ "pmuludq",
    /*023C*/ "pop",
    /*023D*/ "popa",
    /*023E*/ "popad",
    /*023F*/ "popcnt",
    /*0240*/ "popf",
    /*0241*/ "popfd",
    /*0242*/ "popfq",
    /*0243*/ "por",
    /*0244*/ "prefetch_exclusive",
    /*0245*/ "prefetchnta",
    /*0246*/ "prefetcht0",
    /*0247*/ "prefetcht1",
    /*0248*/ "prefetcht2",
    /*0249*/ "prefetchw",
    /*024A*/ "prefetchwt1",
    /*024B*/ "psadbw",
    /*024C*/ "pshufb",
    /*024D*/ "pshufd",
    /*024E*/ "pshufhw",
    /*024F*/ "pshuflw",
    /*0250*/ "pshufw",
    /*0251*/ "psignb",
    /*0252*/ "psignd",
    /*0253*/ "psignw",
    /*0254*/ "pslld",
    /*0255*/ "pslldq",
    /*0256*/ "psllq",
    /*0257*/ "psllw",
    /*0258*/ "psrad",
    /*0259*/ "psraw",
    /*025A*/ "psrld",
    /*025B*/ "psrldq",
    /*025C*/ "psrlq",
    /*025D*/ "psrlw",
    /*025E*/ "psubb",
    /*025F*/ "psubd",
    /*0260*/ "psubq",
    /*0261*/ "psubsb",
    /*0262*/ "psubsw",
    /*0263*/ "psubusb",
    /*0264*/ "psubusw",
    /*0265*/ "psubw",
    /*0266*/ "pswapd",
    /*0267*/ "ptest",
    /*0268*/ "ptwrite",
    /*0269*/ "punpckhbw",
    /*026A*/ "punpckhdq",
    /*026B*/ "punpckhqdq",
    /*026C*/ "punpckhwd",
    /*026D*/ "punpcklbw",
    /*026E*/ "punpckldq",
    /*026F*/ "punpcklqdq",
    /*0270*/ "punpcklwd",
    /*0271*/ "push",
    /*0272*/ "pusha",
    /*0273*/ "pushad",
    /*0274*/ "pushf",
    /*0275*/ "pushfd",
    /*0276*/ "pushfq",
    /*0277*/ "pxor",
    /*0278*/ "rcl",
    /*0279*/ "rcpps",
    /*027A*/ "rcpss",
    /*027B*/ "rcr",
    /*027C*/ "rdfsbase",
    /*027D*/ "rdgsbase",
    /*027E*/ "rdmsr",
    /*027F*/ "rdpkru",
    /*0280*/ "rdpmc",
    /*0281*/ "rdrand",
    /*0282*/ "rdseed",
    /*0283*/ "rdsspd",
    /*0284*/ "rdsspq",
    /*0285*/ "rdtsc",
    /*0286*/ "rdtscp",
    /*0287*/ "ret",
    /*0288*/ "ret_far",
    /*0289*/ "rol",
    /*028A*/ "ror",
    /*028B*/ "rorx",
    /*028C*/ "roundpd",
    /*028D*/ "roundps",
    /*028E*/ "roundsd",
    /*028F*/ "roundss",
    /*0290*/ "rsm",
    /*0291*/ "rsqrtps",
    /*0292*/ "rsqrtss",
    /*0293*/ "rstorssp",
    /*0294*/ "sahf",
    /*0295*/ "salc",
    /*0296*/ "sar",
    /*0297*/ "sarx",
    /*0298*/ "savessp",
    /*0299*/ "sbb",
    /*029A*/ "scasb",
    /*029B*/ "scasd",
    /*029C*/ "scasq",
    /*029D*/ "scasw",
    /*029E*/ "setb",
    /*029F*/ "setbe",
    /*02A0*/ "setl",
    /*02A1*/ "setle",
    /*02A2*/ "setnb",
    /*02A3*/ "setnbe",
    /*02A4*/ "setnl",
    /*02A5*/ "setnle",
    /*02A6*/ "setno",
    /*02A7*/ "setnp",
    /*02A8*/ "setns",
    /*02A9*/ "setnz",
    /*02AA*/ "seto",
    /*02AB*/ "setp",
    /*02AC*/ "sets",
    /*02AD*/ "setssbsy",
    /*02AE*/ "setz",
    /*02AF*/ "sfence",
    /*02B0*/ "sgdt",
    /*02B1*/ "sha1msg1",
    /*02B2*/ "sha1msg2",
    /*02B3*/ "sha1nexte",
    /*02B4*/ "sha1rnds4",
    /*02B5*/ "sha256msg1",
    /*02B6*/ "sha256msg2",
    /*02B7*/ "sha256rnds2",
    /*02B8*/ "shl",
    /*02B9*/ "shld",
    /*02BA*/ "shlx",
    /*02BB*/ "shr",
    /*02BC*/ "shrd",
    /*02BD*/ "shrx",
    /*02BE*/ "shufpd",
    /*02BF*/ "shufps",
    /*02C0*/ "sidt",
    /*02C1*/ "skinit",
    /*02C2*/ "sldt",
    /*02C3*/ "slwpcb",
    /*02C4*/ "smsw",
    /*02C5*/ "spflt",
    /*02C6*/ "sqrtpd",
    /*02C7*/ "sqrtps",
    /*02C8*/ "sqrtsd",
    /*02C9*/ "sqrtss",
    /*02CA*/ "stac",
    /*02CB*/ "stc",
    /*02CC*/ "std",
    /*02CD*/ "stgi",
    /*02CE*/ "sti",
    /*02CF*/ "stmxcsr",
    /*02D0*/ "stosb",
    /*02D1*/ "stosd",
    /*02D2*/ "stosq",
    /*02D3*/ "stosw",
    /*02D4*/ "str",
    /*02D5*/ "sub",
    /*02D6*/ "subpd",
    /*02D7*/ "subps",
    /*02D8*/ "subsd",
    /*02D9*/ "subss",
    /*02DA*/ "swapgs",
    /*02DB*/ "syscall",
    /*02DC*/ "sysenter",
    /*02DD*/ "sysexit",
    /*02DE*/ "sysret",
    /*02DF*/ "t1mskc",
    /*02E0*/ "test",
    /*02E1*/ "tzcnt",
    /*02E2*/ "tzcnti",
    /*02E3*/ "tzmsk",
    /*02E4*/ "ucomisd",
    /*02E5*/ "ucomiss",
    /*02E6*/ "ud2",
    /*02E7*/ "unpckhpd",
    /*02E8*/ "unpckhps",
    /*02E9*/ "unpcklpd",
    /*02EA*/ "unpcklps",
    /*02EB*/ "v4fmaddps",
    /*02EC*/ "v4fmaddss",
    /*02ED*/ "v4fnmaddps",
    /*02EE*/ "v4fnmaddss",
    /*02EF*/ "vaddnpd",
    /*02F0*/ "vaddnps",
    /*02F1*/ "vaddpd",
    /*02F2*/ "vaddps",
    /*02F3*/ "vaddsd",
    /*02F4*/ "vaddsetsps",
    /*02F5*/ "vaddss",
    /*02F6*/ "vaddsubpd",
    /*02F7*/ "vaddsubps",
    /*02F8*/ "vaesdec",
    /*02F9*/ "vaesdeclast",
    /*02FA*/ "vaesenc",
    /*02FB*/ "vaesenclast",
    /*02FC*/ "vaesimc",
    /*02FD*/ "vaeskeygenassist",
    /*02FE*/ "valignd",
    /*02FF*/ "valignq",
    /*0300*/ "vandnpd",
    /*0301*/ "vandnps",
    /*0302*/ "vandpd",
    /*0303*/ "vandps",
    /*0304*/ "vblendmpd",
    /*0305*/ "vblendmps",
    /*0306*/ "vblendpd",
    /*0307*/ "vblendps",
    /*0308*/ "vblendvpd",
    /*0309*/ "vblendvps",
    /*030A*/ "vbroadcastf128",
    /*030B*/ "vbroadcastf32x2",
    /*030C*/ "vbroadcastf32x4",
    /*030D*/ "vbroadcastf32x8",
    /*030E*/ "vbroadcastf64x2",
    /*030F*/ "vbroadcastf64x4",
    /*0310*/ "vbroadcasti128",
    /*0311*/ "vbroadcasti32x2",
    /*0312*/ "vbroadcasti32x4",
    /*0313*/ "vbroadcasti32x8",
    /*0314*/ "vbroadcasti64x2",
    /*0315*/ "vbroadcasti64x4",
    /*0316*/ "vbroadcastsd",
    /*0317*/ "vbroadcastss",
    /*0318*/ "vcmppd",
    /*0319*/ "vcmpps",
    /*031A*/ "vcmpsd",
    /*031B*/ "vcmpss",
    /*031C*/ "vcomisd",
    /*031D*/ "vcomiss",
    /*031E*/ "vcompresspd",
    /*031F*/ "vcompressps",
    /*0320*/ "vcvtdq2pd",
    /*0321*/ "vcvtdq2ps",
    /*0322*/ "vcvtfxpntdq2ps",
    /*0323*/ "vcvtfxpntpd2dq",
    /*0324*/ "vcvtfxpntpd2udq",
    /*0325*/ "vcvtfxpntps2dq",
    /*0326*/ "vcvtfxpntps2udq",
    /*0327*/ "vcvtfxpntudq2ps",
    /*0328*/ "vcvtpd2dq",
    /*0329*/ "vcvtpd2ps",
    /*032A*/ "vcvtpd2qq",
    /*032B*/ "vcvtpd2udq",
    /*032C*/ "vcvtpd2uqq",
    /*032D*/ "vcvtph2ps",
    /*032E*/ "vcvtps2dq",
    /*032F*/ "vcvtps2pd",
    /*0330*/ "vcvtps2ph",
    /*0331*/ "vcvtps2qq",
    /*0332*/ "vcvtps2udq",
    /*0333*/ "vcvtps2uqq",
    /*0334*/ "vcvtqq2pd",
    /*0335*/ "vcvtqq2ps",
    /*0336*/ "vcvtsd2si",
    /*0337*/ "vcvtsd2ss",
    /*0338*/ "vcvtsd2usi",
    /*0339*/ "vcvtsi2sd",
    /*033A*/ "vcvtsi2ss",
    /*033B*/ "vcvtss2sd",
    /*033C*/ "vcvtss2si",
    /*033D*/ "vcvtss2usi",
    /*033E*/ "vcvttpd2dq",
    /*033F*/ "vcvttpd2qq",
    /*0340*/ "vcvttpd2udq",
    /*0341*/ "vcvttpd2uqq",
    /*0342*/ "vcvttps2dq",
    /*0343*/ "vcvttps2qq",
    /*0344*/ "vcvttps2udq",
    /*0345*/ "vcvttps2uqq",
    /*0346*/ "vcvttsd2si",
    /*0347*/ "vcvttsd2usi",
    /*0348*/ "vcvttss2si",
    /*0349*/ "vcvttss2usi",
    /*034A*/ "vcvtudq2pd",
    /*034B*/ "vcvtudq2ps",
    /*034C*/ "vcvtuqq2pd",
    /*034D*/ "vcvtuqq2ps",
    /*034E*/ "vcvtusi2sd",
    /*034F*/ "vcvtusi2ss",
    /*0350*/ "vdbpsadbw",
    /*0351*/ "vdivpd",
    /*0352*/ "vdivps",
    /*0353*/ "vdivsd",
    /*0354*/ "vdivss",
    /*0355*/ "vdppd",
    /*0356*/ "vdpps",
    /*0357*/ "verr",
    /*0358*/ "verw",
    /*0359*/ "vexp223ps",
    /*035A*/ "vexp2pd",
    /*035B*/ "vexp2ps",
    /*035C*/ "vexpandpd",
    /*035D*/ "vexpandps",
    /*035E*/ "vextractf128",
    /*035F*/ "vextractf32x4",
    /*0360*/ "vextractf32x8",
    /*0361*/ "vextractf64x2",
    /*0362*/ "vextractf64x4",
    /*0363*/ "vextracti128",
    /*0364*/ "vextracti32x4",
    /*0365*/ "vextracti32x8",
    /*0366*/ "vextracti64x2",
    /*0367*/ "vextracti64x4",
    /*0368*/ "vextractps",
    /*0369*/ "vfixupimmpd",
    /*036A*/ "vfixupimmps",
    /*036B*/ "vfixupimmsd",
    /*036C*/ "vfixupimmss",
    /*036D*/ "vfixupnanpd",
    /*036E*/ "vfixupnanps",
    /*036F*/ "vfmadd132pd",
    /*0370*/ "vfmadd132ps",
    /*0371*/ "vfmadd132sd",
    /*0372*/ "vfmadd132ss",
    /*0373*/ "vfmadd213pd",
    /*0374*/ "vfmadd213ps",
    /*0375*/ "vfmadd213sd",
    /*0376*/ "vfmadd213ss",
    /*0377*/ "vfmadd231pd",
    /*0378*/ "vfmadd231ps",
    /*0379*/ "vfmadd231sd",
    /*037A*/ "vfmadd231ss",
    /*037B*/ "vfmadd233ps",
    /*037C*/ "vfmaddpd",
    /*037D*/ "vfmaddps",
    /*037E*/ "vfmaddsd",
    /*037F*/ "vfmaddss",
    /*0380*/ "vfmaddsub132pd",
    /*0381*/ "vfmaddsub132ps",
    /*0382*/ "vfmaddsub213pd",
    /*0383*/ "vfmaddsub213ps",
    /*0384*/ "vfmaddsub231pd",
    /*0385*/ "vfmaddsub231ps",
    /*0386*/ "vfmaddsubpd",
    /*0387*/ "vfmaddsubps",
    /*0388*/ "vfmsub132pd",
    /*0389*/ "vfmsub132ps",
    /*038A*/ "vfmsub132sd",
    /*038B*/ "vfmsub132ss",
    /*038C*/ "vfmsub213pd",
    /*038D*/ "vfmsub213ps",
    /*038E*/ "vfmsub213sd",
    /*038F*/ "vfmsub213ss",
    /*0390*/ "vfmsub231pd",
    /*0391*/ "vfmsub231ps",
    /*0392*/ "vfmsub231sd",
    /*0393*/ "vfmsub231ss",
    /*0394*/ "vfmsubadd132pd",
    /*0395*/ "vfmsubadd132ps",
    /*0396*/ "vfmsubadd213pd",
    /*0397*/ "vfmsubadd213ps",
    /*0398*/ "vfmsubadd231pd",
    /*0399*/ "vfmsubadd231ps",
    /*039A*/ "vfmsubaddpd",
    /*039B*/ "vfmsubaddps",
    /*039C*/ "vfmsubpd",
    /*039D*/ "vfmsubps",
    /*039E*/ "vfmsubsd",
    /*039F*/ "vfmsubss",
    /*03A0*/ "vfnmadd132pd",
    /*03A1*/ "vfnmadd132ps",
    /*03A2*/ "vfnmadd132sd",
    /*03A3*/ "vfnmadd132ss",
    /*03A4*/ "vfnmadd213pd",
    /*03A5*/ "vfnmadd213ps",
    /*03A6*/ "vfnmadd213sd",
    /*03A7*/ "vfnmadd213ss",
    /*03A8*/ "vfnmadd231pd",
    /*03A9*/ "vfnmadd231ps",
    /*03AA*/ "vfnmadd231sd",
    /*03AB*/ "vfnmadd231ss",
    /*03AC*/ "vfnmaddpd",
    /*03AD*/ "vfnmaddps",
    /*03AE*/ "vfnmaddsd",
    /*03AF*/ "vfnmaddss",
    /*03B0*/ "vfnmsub132pd",
    /*03B1*/ "vfnmsub132ps",
    /*03B2*/ "vfnmsub132sd",
    /*03B3*/ "vfnmsub132ss",
    /*03B4*/ "vfnmsub213pd",
    /*03B5*/ "vfnmsub213ps",
    /*03B6*/ "vfnmsub213sd",
    /*03B7*/ "vfnmsub213ss",
    /*03B8*/ "vfnmsub231pd",
    /*03B9*/ "vfnmsub231ps",
    /*03BA*/ "vfnmsub231sd",
    /*03BB*/ "vfnmsub231ss",
    /*03BC*/ "vfnmsubpd",
    /*03BD*/ "vfnmsubps",
    /*03BE*/ "vfnmsubsd",
    /*03BF*/ "vfnmsubss",
    /*03C0*/ "vfpclasspd",
    /*03C1*/ "vfpclassps",
    /*03C2*/ "vfpclasssd",
    /*03C3*/ "vfpclassss",
    /*03C4*/ "vfrczpd",
    /*03C5*/ "vfrczps",
    /*03C6*/ "vfrczsd",
    /*03C7*/ "vfrczss",
    /*03C8*/ "vgatherdpd",
    /*03C9*/ "vgatherdps",
    /*03CA*/ "vgatherpf0dpd",
    /*03CB*/ "vgatherpf0dps",
    /*03CC*/ "vgatherpf0hintdpd",
    /*03CD*/ "vgatherpf0hintdps",
    /*03CE*/ "vgatherpf0qpd",
    /*03CF*/ "vgatherpf0qps",
    /*03D0*/ "vgatherpf1dpd",
    /*03D1*/ "vgatherpf1dps",
    /*03D2*/ "vgatherpf1qpd",
    /*03D3*/ "vgatherpf1qps",
    /*03D4*/ "vgatherqpd",
    /*03D5*/ "vgatherqps",
    /*03D6*/ "vgetexppd",
    /*03D7*/ "vgetexpps",
    /*03D8*/ "vgetexpsd",
    /*03D9*/ "vgetexpss",
    /*03DA*/ "vgetmantpd",
    /*03DB*/ "vgetmantps",
    /*03DC*/ "vgetmantsd",
    /*03DD*/ "vgetmantss",
    /*03DE*/ "vgmaxabsps",
    /*03DF*/ "vgmaxpd",
    /*03E0*/ "vgmaxps",
    /*03E1*/ "vgminpd",
    /*03E2*/ "vgminps",
    /*03E3*/ "vhaddpd",
    /*03E4*/ "vhaddps",
    /*03E5*/ "vhsubpd",
    /*03E6*/ "vhsubps",
    /*03E7*/ "vinsertf128",
    /*03E8*/ "vinsertf32x4",
    /*03E9*/ "vinsertf32x8",
    /*03EA*/ "vinsertf64x2",
    /*03EB*/ "vinsertf64x4",
    /*03EC*/ "vinserti128",
    /*03ED*/ "vinserti32x4",
    /*03EE*/ "vinserti32x8",
    /*03EF*/ "vinserti64x2",
    /*03F0*/ "vinserti64x4",
    /*03F1*/ "vinsertps",
    /*03F2*/ "vlddqu",
    /*03F3*/ "vldmxcsr",
    /*03F4*/ "vloadunpackhd",
    /*03F5*/ "vloadunpackhpd",
    /*03F6*/ "vloadunpackhps",
    /*03F7*/ "vloadunpackhq",
    /*03F8*/ "vloadunpackld",
    /*03F9*/ "vloadunpacklpd",
    /*03FA*/ "vloadunpacklps",
    /*03FB*/ "vloadunpacklq",
    /*03FC*/ "vlog2ps",
    /*03FD*/ "vmaskmovdqu",
    /*03FE*/ "vmaskmovpd",
    /*03FF*/ "vmaskmovps",
    /*0400*/ "vmaxpd",
    /*0401*/ "vmaxps",
    /*0402*/ "vmaxsd",
    /*0403*/ "vmaxss",
    /*0404*/ "vmcall",
    /*0405*/ "vmclear",
    /*0406*/ "vmfunc",
    /*0407*/ "vminpd",
    /*0408*/ "vminps",
    /*0409*/ "vminsd",
    /*040A*/ "vminss",
    /*040B*/ "vmlaunch",
    /*040C*/ "vmload",
    /*040D*/ "vmmcall",
    /*040E*/ "vmovapd",
    /*040F*/ "vmovaps",
    /*0410*/ "vmovd",
    /*0411*/ "vmovddup",
    /*0412*/ "vmovdqa",
    /*0413*/ "vmovdqa32",
    /*0414*/ "vmovdqa64",
    /*0415*/ "vmovdqu",
    /*0416*/ "vmovdqu16",
    /*0417*/ "vmovdqu32",
    /*0418*/ "vmovdqu64",
    /*0419*/ "vmovdqu8",
    /*041A*/ "vmovhlps",
    /*041B*/ "vmovhpd",
    /*041C*/ "vmovhps",
    /*041D*/ "vmovlhps",
    /*041E*/ "vmovlpd",
    /*041F*/ "vmovlps",
    /*0420*/ "vmovmskpd",
    /*0421*/ "vmovmskps",
    /*0422*/ "vmovnrapd",
    /*0423*/ "vmovnraps",
    /*0424*/ "vmovnrngoapd",
    /*0425*/ "vmovnrngoaps",
    /*0426*/ "vmovntdq",
    /*0427*/ "vmovntdqa",
    /*0428*/ "vmovntpd",
    /*0429*/ "vmovntps",
    /*042A*/ "vmovq",
    /*042B*/ "vmovsd",
    /*042C*/ "vmovshdup",
    /*042D*/ "vmovsldup",
    /*042E*/ "vmovss",
    /*042F*/ "vmovupd",
    /*0430*/ "vmovups",
    /*0431*/ "vmpsadbw",
    /*0432*/ "vmptrld",
    /*0433*/ "vmptrst",
    /*0434*/ "vmread",
    /*0435*/ "vmresume",
    /*0436*/ "vmrun",
    /*0437*/ "vmsave",
    /*0438*/ "vmulpd",
    /*0439*/ "vmulps",
    /*043A*/ "vmulsd",
    /*043B*/ "vmulss",
    /*043C*/ "vmwrite",
    /*043D*/ "vmxoff",
    /*043E*/ "vmxon",
    /*043F*/ "vorpd",
    /*0440*/ "vorps",
    /*0441*/ "vp4dpwssd",
    /*0442*/ "vp4dpwssds",
    /*0443*/ "vpabsb",
    /*0444*/ "vpabsd",
    /*0445*/ "vpabsq",
    /*0446*/ "vpabsw",
    /*0447*/ "vpackssdw",
    /*0448*/ "vpacksswb",
    /*0449*/ "vpackstorehd",
    /*044A*/ "vpackstorehpd",
    /*044B*/ "vpackstorehps",
    /*044C*/ "vpackstorehq",
    /*044D*/ "vpackstoreld",
    /*044E*/ "vpackstorelpd",
    /*044F*/ "vpackstorelps",
    /*0450*/ "vpackstorelq",
    /*0451*/ "vpackusdw",
    /*0452*/ "vpackuswb",
    /*0453*/ "vpadcd",
    /*0454*/ "vpaddb",
    /*0455*/ "vpaddd",
    /*0456*/ "vpaddq",
    /*0457*/ "vpaddsb",
    /*0458*/ "vpaddsetcd",
    /*0459*/ "vpaddsetsd",
    /*045A*/ "vpaddsw",
    /*045B*/ "vpaddusb",
    /*045C*/ "vpaddusw",
    /*045D*/ "vpaddw",
    /*045E*/ "vpalignr",
    /*045F*/ "vpand",
    /*0460*/ "vpandd",
    /*0461*/ "vpandn",
    /*0462*/ "vpandnd",
    /*0463*/ "vpandnq",
    /*0464*/ "vpandq",
    /*0465*/ "vpavgb",
    /*0466*/ "vpavgw",
    /*0467*/ "vpblendd",
    /*0468*/ "vpblendmb",
    /*0469*/ "vpblendmd",
    /*046A*/ "vpblendmq",
    /*046B*/ "vpblendmw",
    /*046C*/ "vpblendvb",
    /*046D*/ "vpblendw",
    /*046E*/ "vpbroadcastb",
    /*046F*/ "vpbroadcastd",
    /*0470*/ "vpbroadcastmb2q",
    /*0471*/ "vpbroadcastmw2d",
    /*0472*/ "vpbroadcastq",
    /*0473*/ "vpbroadcastw",
    /*0474*/ "vpclmulqdq",
    /*0475*/ "vpcmov",
    /*0476*/ "vpcmpb",
    /*0477*/ "vpcmpd",
    /*0478*/ "vpcmpeqb",
    /*0479*/ "vpcmpeqd",
    /*047A*/ "vpcmpeqq",
    /*047B*/ "vpcmpeqw",
    /*047C*/ "vpcmpestri",
    /*047D*/ "vpcmpestrm",
    /*047E*/ "vpcmpgtb",
    /*047F*/ "vpcmpgtd",
    /*0480*/ "vpcmpgtq",
    /*0481*/ "vpcmpgtw",
    /*0482*/ "vpcmpistri",
    /*0483*/ "vpcmpistrm",
    /*0484*/ "vpcmpltd",
    /*0485*/ "vpcmpq",
    /*0486*/ "vpcmpub",
    /*0487*/ "vpcmpud",
    /*0488*/ "vpcmpuq",
    /*0489*/ "vpcmpuw",
    /*048A*/ "vpcmpw",
    /*048B*/ "vpcomb",
    /*048C*/ "vpcomd",
    /*048D*/ "vpcompressd",
    /*048E*/ "vpcompressq",
    /*048F*/ "vpcomq",
    /*0490*/ "vpcomub",
    /*0491*/ "vpcomud",
    /*0492*/ "vpcomuq",
    /*0493*/ "vpcomuw",
    /*0494*/ "vpcomw",
    /*0495*/ "vpconflictd",
    /*0496*/ "vpconflictq",
    /*0497*/ "vperm2f128",
    /*0498*/ "vperm2i128",
    /*0499*/ "vpermb",
    /*049A*/ "vpermd",
    /*049B*/ "vpermf32x4",
    /*049C*/ "vpermi2b",
    /*049D*/ "vpermi2d",
    /*049E*/ "vpermi2pd",
    /*049F*/ "vpermi2ps",
    /*04A0*/ "vpermi2q",
    /*04A1*/ "vpermi2w",
    /*04A2*/ "vpermil2pd",
    /*04A3*/ "vpermil2ps",
    /*04A4*/ "vpermilpd",
    /*04A5*/ "vpermilps",
    /*04A6*/ "vpermpd",
    /*04A7*/ "vpermps",
    /*04A8*/ "vpermq",
    /*04A9*/ "vpermt2b",
    /*04AA*/ "vpermt2d",
    /*04AB*/ "vpermt2pd",
    /*04AC*/ "vpermt2ps",
    /*04AD*/ "vpermt2q",
    /*04AE*/ "vpermt2w",
    /*04AF*/ "vpermw",
    /*04B0*/ "vpexpandd",
    /*04B1*/ "vpexpandq",
    /*04B2*/ "vpextrb",
    /*04B3*/ "vpextrd",
    /*04B4*/ "vpextrq",
    /*04B5*/ "vpextrw",
    /*04B6*/ "vpgatherdd",
    /*04B7*/ "vpgatherdq",
    /*04B8*/ "vpgatherqd",
    /*04B9*/ "vpgatherqq",
    /*04BA*/ "vphaddbd",
    /*04BB*/ "vphaddbq",
    /*04BC*/ "vphaddbw",
    /*04BD*/ "vphaddd",
    /*04BE*/ "vphadddq",
    /*04BF*/ "vphaddsw",
    /*04C0*/ "vphaddubd",
    /*04C1*/ "vphaddubq",
    /*04C2*/ "vphaddubw",
    /*04C3*/ "vphaddudq",
    /*04C4*/ "vphadduwd",
    /*04C5*/ "vphadduwq",
    /*04C6*/ "vphaddw",
    /*04C7*/ "vphaddwd",
    /*04C8*/ "vphaddwq",
    /*04C9*/ "vphminposuw",
    /*04CA*/ "vphsubbw",
    /*04CB*/ "vphsubd",
    /*04CC*/ "vphsubdq",
    /*04CD*/ "vphsubsw",
    /*04CE*/ "vphsubw",
    /*04CF*/ "vphsubwd",
    /*04D0*/ "vpinsrb",
    /*04D1*/ "vpinsrd",
    /*04D2*/ "vpinsrq",
    /*04D3*/ "vpinsrw",
    /*04D4*/ "vplzcntd",
    /*04D5*/ "vplzcntq",
    /*04D6*/ "vpmacsdd",
    /*04D7*/ "vpmacsdqh",
    /*04D8*/ "vpmacsdql",
    /*04D9*/ "vpmacssdd",
    /*04DA*/ "vpmacssdqh",
    /*04DB*/ "vpmacssdql",
    /*04DC*/ "vpmacsswd",
    /*04DD*/ "vpmacssww",
    /*04DE*/ "vpmacswd",
    /*04DF*/ "vpmacsww",
    /*04E0*/ "vpmadcsswd",
    /*04E1*/ "vpmadcswd",
    /*04E2*/ "vpmadd231d",
    /*04E3*/ "vpmadd233d",
    /*04E4*/ "vpmadd52huq",
    /*04E5*/ "vpmadd52luq",
    /*04E6*/ "vpmaddubsw",
    /*04E7*/ "vpmaddwd",
    /*04E8*/ "vpmaskmovd",
    /*04E9*/ "vpmaskmovq",
    /*04EA*/ "vpmaxsb",
    /*04EB*/ "vpmaxsd",
    /*04EC*/ "vpmaxsq",
    /*04ED*/ "vpmaxsw",
    /*04EE*/ "vpmaxub",
    /*04EF*/ "vpmaxud",
    /*04F0*/ "vpmaxuq",
    /*04F1*/ "vpmaxuw",
    /*04F2*/ "vpminsb",
    /*04F3*/ "vpminsd",
    /*04F4*/ "vpminsq",
    /*04F5*/ "vpminsw",
    /*04F6*/ "vpminub",
    /*04F7*/ "vpminud",
    /*04F8*/ "vpminuq",
    /*04F9*/ "vpminuw",
    /*04FA*/ "vpmovb2m",
    /*04FB*/ "vpmovd2m",
    /*04FC*/ "vpmovdb",
    /*04FD*/ "vpmovdw",
    /*04FE*/ "vpmovm2b",
    /*04FF*/ "vpmovm2d",
    /*0500*/ "vpmovm2q",
    /*0501*/ "vpmovm2w",
    /*0502*/ "vpmovmskb",
    /*0503*/ "vpmovq2m",
    /*0504*/ "vpmovqb",
    /*0505*/ "vpmovqd",
    /*0506*/ "vpmovqw",
    /*0507*/ "vpmovsdb",
    /*0508*/ "vpmovsdw",
    /*0509*/ "vpmovsqb",
    /*050A*/ "vpmovsqd",
    /*050B*/ "vpmovsqw",
    /*050C*/ "vpmovswb",
    /*050D*/ "vpmovsxbd",
    /*050E*/ "vpmovsxbq",
    /*050F*/ "vpmovsxbw",
    /*0510*/ "vpmovsxdq",
    /*0511*/ "vpmovsxwd",
    /*0512*/ "vpmovsxwq",
    /*0513*/ "vpmovusdb",
    /*0514*/ "vpmovusdw",
    /*0515*/ "vpmovusqb",
    /*0516*/ "vpmovusqd",
    /*0517*/ "vpmovusqw",
    /*0518*/ "vpmovuswb",
    /*0519*/ "vpmovw2m",
    /*051A*/ "vpmovwb",
    /*051B*/ "vpmovzxbd",
    /*051C*/ "vpmovzxbq",
    /*051D*/ "vpmovzxbw",
    /*051E*/ "vpmovzxdq",
    /*051F*/ "vpmovzxwd",
    /*0520*/ "vpmovzxwq",
    /*0521*/ "vpmuldq",
    /*0522*/ "vpmulhd",
    /*0523*/ "vpmulhrsw",
    /*0524*/ "vpmulhud",
    /*0525*/ "vpmulhuw",
    /*0526*/ "vpmulhw",
    /*0527*/ "vpmulld",
    /*0528*/ "vpmullq",
    /*0529*/ "vpmullw",
    /*052A*/ "vpmultishiftqb",
    /*052B*/ "vpmuludq",
    /*052C*/ "vpopcntd",
    /*052D*/ "vpopcntq",
    /*052E*/ "vpor",
    /*052F*/ "vpord",
    /*0530*/ "vporq",
    /*0531*/ "vpperm",
    /*0532*/ "vprefetch0",
    /*0533*/ "vprefetch1",
    /*0534*/ "vprefetch2",
    /*0535*/ "vprefetche0",
    /*0536*/ "vprefetche1",
    /*0537*/ "vprefetche2",
    /*0538*/ "vprefetchenta",
    /*0539*/ "vprefetchnta",
    /*053A*/ "vprold",
    /*053B*/ "vprolq",
    /*053C*/ "vprolvd",
    /*053D*/ "vprolvq",
    /*053E*/ "vprord",
    /*053F*/ "vprorq",
    /*0540*/ "vprorvd",
    /*0541*/ "vprorvq",
    /*0542*/ "vprotb",
    /*0543*/ "vprotd",
    /*0544*/ "vprotq",
    /*0545*/ "vprotw",
    /*0546*/ "vpsadbw",
    /*0547*/ "vpsbbd",
    /*0548*/ "vpsbbrd",
    /*0549*/ "vpscatterdd",
    /*054A*/ "vpscatterdq",
    /*054B*/ "vpscatterqd",
    /*054C*/ "vpscatterqq",
    /*054D*/ "vpshab",
    /*054E*/ "vpshad",
    /*054F*/ "vpshaq",
    /*0550*/ "vpshaw",
    /*0551*/ "vpshlb",
    /*0552*/ "vpshld",
    /*0553*/ "vpshlq",
    /*0554*/ "vpshlw",
    /*0555*/ "vpshufb",
    /*0556*/ "vpshufd",
    /*0557*/ "vpshufhw",
    /*0558*/ "vpshuflw",
    /*0559*/ "vpsignb",
    /*055A*/ "vpsignd",
    /*055B*/ "vpsignw",
    /*055C*/ "vpslld",
    /*055D*/ "vpslldq",
    /*055E*/ "vpsllq",
    /*055F*/ "vpsllvd",
    /*0560*/ "vpsllvq",
    /*0561*/ "vpsllvw",
    /*0562*/ "vpsllw",
    /*0563*/ "vpsrad",
    /*0564*/ "vpsraq",
    /*0565*/ "vpsravd",
    /*0566*/ "vpsravq",
    /*0567*/ "vpsravw",
    /*0568*/ "vpsraw",
    /*0569*/ "vpsrld",
    /*056A*/ "vpsrldq",
    /*056B*/ "vpsrlq",
    /*056C*/ "vpsrlvd",
    /*056D*/ "vpsrlvq",
    /*056E*/ "vpsrlvw",
    /*056F*/ "vpsrlw",
    /*0570*/ "vpsubb",
    /*0571*/ "vpsubd",
    /*0572*/ "vpsubq",
    /*0573*/ "vpsubrd",
    /*0574*/ "vpsubrsetbd",
    /*0575*/ "vpsubsb",
    /*0576*/ "vpsubsetbd",
    /*0577*/ "vpsubsw",
    /*0578*/ "vpsubusb",
    /*0579*/ "vpsubusw",
    /*057A*/ "vpsubw",
    /*057B*/ "vpternlogd",
    /*057C*/ "vpternlogq",
    /*057D*/ "vptest",
    /*057E*/ "vptestmb",
    /*057F*/ "vptestmd",
    /*0580*/ "vptestmq",
    /*0581*/ "vptestmw",
    /*0582*/ "vptestnmb",
    /*0583*/ "vptestnmd",
    /*0584*/ "vptestnmq",
    /*0585*/ "vptestnmw",
    /*0586*/ "vpunpckhbw",
    /*0587*/ "vpunpckhdq",
    /*0588*/ "vpunpckhqdq",
    /*0589*/ "vpunpckhwd",
    /*058A*/ "vpunpcklbw",
    /*058B*/ "vpunpckldq",
    /*058C*/ "vpunpcklqdq",
    /*058D*/ "vpunpcklwd",
    /*058E*/ "vpxor",
    /*058F*/ "vpxord",
    /*0590*/ "vpxorq",
    /*0591*/ "vrangepd",
    /*0592*/ "vrangeps",
    /*0593*/ "vrangesd",
    /*0594*/ "vrangess",
    /*0595*/ "vrcp14pd",
    /*0596*/ "vrcp14ps",
    /*0597*/ "vrcp14sd",
    /*0598*/ "vrcp14ss",
    /*0599*/ "vrcp23ps",
    /*059A*/ "vrcp28pd",
    /*059B*/ "vrcp28ps",
    /*059C*/ "vrcp28sd",
    /*059D*/ "vrcp28ss",
    /*059E*/ "vrcpps",
    /*059F*/ "vrcpss",
    /*05A0*/ "vreducepd",
    /*05A1*/ "vreduceps",
    /*05A2*/ "vreducesd",
    /*05A3*/ "vreducess",
    /*05A4*/ "vrndfxpntpd",
    /*05A5*/ "vrndfxpntps",
    /*05A6*/ "vrndscalepd",
    /*05A7*/ "vrndscaleps",
    /*05A8*/ "vrndscalesd",
    /*05A9*/ "vrndscaless",
    /*05AA*/ "vroundpd",
    /*05AB*/ "vroundps",
    /*05AC*/ "vroundsd",
    /*05AD*/ "vroundss",
    /*05AE*/ "vrsqrt14pd",
    /*05AF*/ "vrsqrt14ps",
    /*05B0*/ "vrsqrt14sd",
    /*05B1*/ "vrsqrt14ss",
    /*05B2*/ "vrsqrt23ps",
    /*05B3*/ "vrsqrt28pd",
    /*05B4*/ "vrsqrt28ps",
    /*05B5*/ "vrsqrt28sd",
    /*05B6*/ "vrsqrt28ss",
    /*05B7*/ "vrsqrtps",
    /*05B8*/ "vrsqrtss",
    /*05B9*/ "vscalefpd",
    /*05BA*/ "vscalefps",
    /*05BB*/ "vscalefsd",
    /*05BC*/ "vscalefss",
    /*05BD*/ "vscaleps",
    /*05BE*/ "vscatterdpd",
    /*05BF*/ "vscatterdps",
    /*05C0*/ "vscatterpf0dpd",
    /*05C1*/ "vscatterpf0dps",
    /*05C2*/ "vscatterpf0hintdpd",
    /*05C3*/ "vscatterpf0hintdps",
    /*05C4*/ "vscatterpf0qpd",
    /*05C5*/ "vscatterpf0qps",
    /*05C6*/ "vscatterpf1dpd",
    /*05C7*/ "vscatterpf1dps",
    /*05C8*/ "vscatterpf1qpd",
    /*05C9*/ "vscatterpf1qps",
    /*05CA*/ "vscatterqpd",
    /*05CB*/ "vscatterqps",
    /*05CC*/ "vshuff32x4",
    /*05CD*/ "vshuff64x2",
    /*05CE*/ "vshufi32x4",
    /*05CF*/ "vshufi64x2",
    /*05D0*/ "vshufpd",
    /*05D1*/ "vshufps",
    /*05D2*/ "vsqrtpd",
    /*05D3*/ "vsqrtps",
    /*05D4*/ "vsqrtsd",
    /*05D5*/ "vsqrtss",
    /*05D6*/ "vstmxcsr",
    /*05D7*/ "vsubpd",
    /*05D8*/ "vsubps",
    /*05D9*/ "vsubrpd",
    /*05DA*/ "vsubrps",
    /*05DB*/ "vsubsd",
    /*05DC*/ "vsubss",
    /*05DD*/ "vtestpd",
    /*05DE*/ "vtestps",
    /*05DF*/ "vucomisd",
    /*05E0*/ "vucomiss",
    /*05E1*/ "vunpckhpd",
    /*05E2*/ "vunpckhps",
    /*05E3*/ "vunpcklpd",
    /*05E4*/ "vunpcklps",
    /*05E5*/ "vxorpd",
    /*05E6*/ "vxorps",
    /*05E7*/ "vzeroall",
    /*05E8*/ "vzeroupper",
    /*05E9*/ "wbinvd",
    /*05EA*/ "wrfsbase",
    /*05EB*/ "wrgsbase",
    /*05EC*/ "wrmsr",
    /*05ED*/ "wrpkru",
    /*05EE*/ "wrssd",
    /*05EF*/ "wrssq",
    /*05F0*/ "wrussd",
    /*05F1*/ "wrussq",
    /*05F2*/ "xadd",
    /*05F3*/ "xchg",
    /*05F4*/ "xgetbv",
    /*05F5*/ "xlat",
    /*05F6*/ "xor",
    /*05F7*/ "xorpd",
    /*05F8*/ "xorps",
    /*05F9*/ "xrstor",
    /*05FA*/ "xrstor64",
    /*05FB*/ "xrstors",
    /*05FC*/ "xrstors64",
    /*05FD*/ "xsave",
    /*05FE*/ "xsave64",
    /*05FF*/ "xsavec",
    /*0600*/ "xsavec64",
    /*0601*/ "xsaveopt",
    /*0602*/ "xsaveopt64",
    /*0603*/ "xsaves",
    /*0604*/ "xsaves64",
    /*0605*/ "xsetbv"
};