/* IL2CPP: Modules.Contexts.Home.Monetization.EndGameOffer.EgoOfferConfigModel$$.ctor
void Modules_Contexts_Home_Monetization_EndGameOffer_EgoOfferConfigModel___ctor (Modules_Contexts_Home_Monetization_EndGameOffer_EgoOfferConfigModel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Monetization.EndGameOffer.EgoOfferConfigModel$$.ctor
   void Modules_Contexts_Home_Monetization_EndGameOffer_EgoOfferConfigModel___ctor
   (Modules_Contexts_Home_Monetization_EndGameOffer_EgoOfferConfigModel_o* __this, const MethodInfo*
   method); */

undefined1  [16]
Modules_Contexts_Home_Monetization_EndGameOffer_EgoOfferConfigModel___ctor_20a7e20(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR_DAT_058064b8;
  if ((bRam0000000005c294c8 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a9428);
    FUN_012d0dc8(PTR_DAT_058064b8);
    bRam0000000005c294c8 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    System_Collections_Generic_List_Int32Enum____ctor_20512f0(lVar2,*(undefined8 *)PTR_DAT_057a9428)
    ;
    *(long *)(param_1 + 0x10) = lVar2;
    FUN_012d0d74((long *)(param_1 + 0x10),lVar2);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

