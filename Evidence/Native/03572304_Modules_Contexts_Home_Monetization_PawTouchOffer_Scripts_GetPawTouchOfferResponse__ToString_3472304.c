/* IL2CPP: Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.GetPawTouchOfferResponse$$ToString
System_String_o* Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_GetPawTouchOfferResponse__ToString (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_GetPawTouchOfferResponse_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.PawTouchOffer.Scripts.GetPawTouchOfferResponse$$ToString
   System_String_o*
   Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_GetPawTouchOfferResponse__ToString
   (Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_GetPawTouchOfferResponse_o* __this,
   const MethodInfo* method); */

void Modules_Contexts_Home_Monetization_PawTouchOffer_Scripts_GetPawTouchOfferResponse__ToString_3472304
               (long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_0580bde0;
  if ((bRam0000000005c326f9 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057db748);
    FUN_012d0dc8(PTR_DAT_057d6138);
    FUN_012d0dc8(PTR_DAT_0580bde0);
    FUN_012d0dc8(PTR_DAT_057b5aa8);
    bRam0000000005c326f9 = 1;
  }
  plVar2 = (long *)FUN_012d0e38(*(undefined8 *)puVar1,5);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if ((lVar5 != 0) &&
     (lVar3 = thunk_FUN_01320d5c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_035724f4:
    uVar4 = thunk_FUN_012d5b8c();
                    /* WARNING: Subroutine does not return */
    FUN_012d0eb8(uVar4,0);
  }
  puVar1 = PTR_DAT_057db748;
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar5;
    FUN_012d0d74(plVar2 + 4,lVar5);
    uStack_24 = *(undefined4 *)(param_1 + 0x18);
    lVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_24);
    if ((lVar5 != 0) &&
       (lVar3 = thunk_FUN_01320d5c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_035724f4;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar5;
      FUN_012d0d74(plVar2 + 5,lVar5);
      lVar5 = *(long *)(param_1 + 0x20);
      if ((lVar5 != 0) &&
         (lVar3 = thunk_FUN_01320d5c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_035724f4;
      puVar1 = PTR_DAT_057d6138;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar5;
        FUN_012d0d74(plVar2 + 6,lVar5);
        uStack_38 = *(undefined8 *)(param_1 + 0x28);
        lVar5 = thunk_FUN_01320a8c(*(undefined8 *)puVar1,&uStack_38);
        if ((lVar5 != 0) &&
           (lVar3 = thunk_FUN_01320d5c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
        goto LAB_035724f4;
        if (3 < *(uint *)(plVar2 + 3)) {
          plVar2[7] = lVar5;
          FUN_012d0d74(plVar2 + 7,lVar5);
          lVar5 = *(long *)(param_1 + 0x30);
          if ((lVar5 != 0) &&
             (lVar3 = thunk_FUN_01320d5c(lVar5,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_035724f4;
          puVar1 = PTR_DAT_057b5aa8;
          if (4 < *(uint *)(plVar2 + 3)) {
            plVar2[8] = lVar5;
            FUN_012d0d74(plVar2 + 8,lVar5);
            System_String__Format_1ed1640(*(undefined8 *)puVar1,plVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef8();
}

