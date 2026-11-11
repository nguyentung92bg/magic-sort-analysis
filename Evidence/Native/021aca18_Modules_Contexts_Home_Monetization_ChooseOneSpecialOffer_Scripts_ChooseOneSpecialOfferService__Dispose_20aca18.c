/* IL2CPP: Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$Dispose
void Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__Dispose (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.ChooseOneSpecialOffer.Scripts.ChooseOneSpecialOfferService$$Dispose
   void 
   Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__Dispose
   (Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService_o*
   __this, const MethodInfo* method); */

ulong Modules_Contexts_Home_Monetization_ChooseOneSpecialOffer_Scripts_ChooseOneSpecialOfferService__Dispose_20aca18
                (long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    Modules_Infrastructure_DI_CustomUpdater__RemoveIntervalUpdate_3d247a4
              (*(long *)(param_1 + 0x38),param_1,0);
    uVar2 = *(ulong *)(param_1 + 0x40);
    if (uVar2 != 0) {
      if (*(char *)(uVar2 + 0x28) == '\0') {
        return uVar2;
      }
      lVar3 = *(long *)(uVar2 + 0x10);
      *(undefined1 *)(uVar2 + 0x28) = 0;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      if ((bRam0000000005c373d7 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_05767248,uVar2,0);
        bRam0000000005c373d7 = 1;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      lVar4 = *(long *)PTR_DAT_05767248;
      iVar1 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0xa0) + 8))
                        (lVar3,uVar2);
      if (-1 < iVar1) {
        (**(code **)(*(long *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x158) + 8))(lVar3,iVar1)
        ;
      }
      return (ulong)(-1 < iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

