// LABLE and "..." release in assembly

// PUSH
def(push, a, address, pushAddress)
def(push, r, register, pushRegister)
def(push, v, value, pushValue)

// POP
def(pop, a, address, popAddress)
def(pop, r, register, popRegister)
def(pop, w, nope, popWord)

// MUL
def(mulw,, nope, mulWords)
def(muld,, nope, mulDoubleWords)
def(mulq,, nope, mulQuadroWords)
def(mulo,, nope, mulOctoWords)

def(smulw,, nope, mulSignedWords)
def(smuld,, nope, mulSignedDoubleWords)
def(smulq,, nope, mulSignedQuadroWords)
def(smulo,, nope, mulSignedOctoWords)

def(mulf,, nope, mulFloat) // size as OctoWord

// SUB
def(subw,, nope, subWords)
def(subd,, nope, subDoubleWords)
def(subq,, nope, subQuadroWords)
def(subo,, nope, subOctoWords)

def(ssubw,, nope, subSignedWords)
def(ssubd,, nope, subSignedDoubleWords)
def(ssubq,, nope, subSignedQuadroWords)
def(ssubo,, nope, subSignedOctoWords)

def(subf,, nope, subFloat) // size as OctoWord

// ADD
def(addw,, nope, addWords)
def(addd,, nope, addDoubleWords)
def(addq,, nope, addQuadroWords)
def(addo,, nope, addOctoWords)

def(saddw,, nope, addSignedWords)
def(saddd,, nope, addSignedDoubleWords)
def(saddq,, nope, addSignedQuadroWords)
def(saddo,, nope, addSignedOctoWords)

def(addf,, nope, addFloat) // size as OctoWord

// DIV
def(divw,, nope, divWords)
def(divd,, nope, divDoubleWords)
def(divq,, nope, divQuadroWords)
def(divo,, nope, divOctoWords)

def(sdivw,, nope, divSignedWords)
def(sdivd,, nope, divSignedDoubleWords)
def(sdivq,, nope, divSignedQuadroWords)
def(sdivo,, nope, divSignedOctoWords)

def(divf,, nope, divFloat) // size as OctoWord

// OUT
def(out,, register, outRegister)
def(xout,, register, outHexRegister)
def(fout,, register, outFloatRegister)

// IN
def(in,, register, inRegister)
def(xin,, register, inHexRegister)
def(fin,, register, inFloatRegister)

// JMP // so... go lea how
def(jmp,, lable, jmpLable)
def(ja,, lable, jaLable)
def(jae,, lable, jaeLable)
def(jb,, lable, jbLable)
def(jbe,, lable, jbeLable)
def(je,, lable, jeLable)
def(jne,, lable, jneLable)

// FUNC
def(call,, lable, callLable)
def(ret,, nope, ret)
