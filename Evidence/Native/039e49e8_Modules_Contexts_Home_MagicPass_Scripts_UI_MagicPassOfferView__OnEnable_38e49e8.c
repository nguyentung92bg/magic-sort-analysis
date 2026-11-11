/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassOfferView$$OnEnable
void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnEnable (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MagicPass.Scripts.UI.MagicPassOfferView$$OnEnable
   void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnEnable
   (Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_MagicPass_Scripts_UI_MagicPassOfferView__OnEnable_38e49e8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
                    /* try { // try from 039e49f0 to 03ae4a13 has its CatchHandler @ 039e485c */
  if (*(long *)(param_1 + 0x20) != 0) {
    Modules_Contexts_Home_UI_Common_Scripts_ProfileImageView__ShowOwnProfileImage_297fe5c
              (*(long *)(param_1 + 0x20),0);
  }
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c34c62 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dc218);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c34c62 = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c();
  }
  uVar2 = UnityEngine_Object__op_Inequality_408e110(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) {
      lVar4 = *(long *)(param_1 + 0x30);
      lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_057dc218);
      if ((lVar3 != 0) &&
         (uVar5 = Modules_Contexts_Home_MagicPass_Scripts_MagicPassService__GetIAPConfigModel_38dbfa8
                            (), lVar4 != 0)) {
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        FUN_012d0d74((undefined8 *)(lVar4 + 0x28),uVar5,0);
        Modules_Contexts_Application_IAP_Scripts_IAPPriceView__FetchAndSetIAPModel_138ac00(lVar4);
        lVar3 = UnityEngine_Component__get_gameObject_408b480(lVar4,0);
        if (lVar3 != 0) {
          if (pcRam0000000005c3a388 == (code *)0x0) {
            pcRam0000000005c3a388 = (code *)FUN_012d0d84(&UNK_043edeb4);
          }
                    /* WARNING: Could not recover jumptable at 0x0418e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000005c3a388)(lVar3,1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

