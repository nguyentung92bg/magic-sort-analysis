/* IL2CPP: Modules.Contexts.Home.Multiplier.MultiplierConfigModel$$IsValid
bool Modules_Contexts_Home_Multiplier_MultiplierConfigModel__IsValid (Modules_Contexts_Home_Multiplier_MultiplierConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Multiplier.MultiplierConfigModel$$IsValid
   bool Modules_Contexts_Home_Multiplier_MultiplierConfigModel__IsValid
   (Modules_Contexts_Home_Multiplier_MultiplierConfigModel_o* __this, const MethodInfo* method); */

bool Modules_Contexts_Home_Multiplier_MultiplierConfigModel__IsValid_315b6d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
                    /* try { // try from 0325b6ec to 0335b8b3 has its CatchHandler @ 0325b6ec
                       catch() { ... } // from try @ 0325b6ec with catch @ 0325b6ec
                       catch() { ... } // from try @ 0325b944 with catch @ 0325b6ec
                       catch() { ... } // from try @ 0325b958 with catch @ 0325b6ec
                       catch() { ... } // from try @ 0325b994 with catch @ 0325b6ec
                       catch() { ... } // from try @ 0325b9d0 with catch @ 0325b6ec */
  if (((((lVar3 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) &&
       (lVar1 = *(long *)(param_1 + 0x28), lVar1 != 0)) &&
      ((((*(long *)(lVar3 + 0x28) != 0 && (*(long *)(lVar3 + 0x30) != 0)) &&
        ((*(long *)(lVar3 + 0x38) != 0 &&
         ((*(long *)(lVar3 + 0x40) != 0 && (*(long *)(lVar2 + 0x28) != 0)))))) &&
       (*(long *)(lVar2 + 0x30) != 0)))) &&
     ((((*(long *)(lVar2 + 0x38) != 0 && (*(long *)(lVar2 + 0x40) != 0)) &&
       (*(long *)(lVar1 + 0x28) != 0)) &&
      ((*(long *)(lVar1 + 0x30) != 0 && (*(long *)(lVar1 + 0x38) != 0)))))) {
    return *(long *)(lVar1 + 0x40) != 0;
  }
  return false;
}

