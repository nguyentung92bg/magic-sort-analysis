/* IL2CPP: Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$PlayTextAnimation
DG_Tweening_Tween_o* Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__PlayTextAnimation (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Monetization.EndlessPortal.Scripts.UI.EndlessPortalIAPButtonController$$PlayTextAnimation
   DG_Tweening_Tween_o*
   Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__PlayTextAnimation
   (Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController_o*
   __this, const MethodInfo* method); */

long Modules_Contexts_Home_Monetization_EndlessPortal_Scripts_UI_EndlessPortalIAPButtonController__PlayTextAnimation_346d1b8
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if (*(char *)(param_4 + 0x71) == '\0') {
    if (*(long *)(param_4 + 0x20) == 0) goto LAB_0356d228;
    uVar5 = UnityEngine_GameObject__get_transform_408e25c(*(long *)(param_4 + 0x20),0);
    lVar4 = *(long *)(param_4 + 0x50);
    if (lVar4 == 0) goto LAB_0356d228;
  }
  else {
    lVar4 = *(long *)(param_4 + 0x40);
    if (lVar4 == 0) goto LAB_0356d228;
    uVar5 = *(undefined8 *)(param_4 + 0x30);
  }
  uVar7 = UnityEngine_Transform__get_localPosition_4092c40(lVar4,0);
  puVar1 = PTR_DAT_05770fd0;
  if (*(long *)(param_4 + 0x58) != 0) {
    uVar8 = *(undefined4 *)(*(long *)(param_4 + 0x58) + 0x110);
    if ((bRam0000000005c284aa & 1) == 0) {
      FUN_012d0dc8(PTR_DAT_0577f050,0,0);
      FUN_012d0dc8(PTR_DAT_0580e4a0);
      FUN_012d0dc8(PTR_DAT_057815e0);
      FUN_012d0dc8(PTR_DAT_05762af8);
      FUN_012d0dc8(PTR_DAT_057bf3a0);
      FUN_012d0dc8(PTR_DAT_0579f818);
      FUN_012d0dc8(PTR_DAT_05770fd0);
      bRam0000000005c284aa = 1;
    }
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0577f050;
    if (lVar4 != 0) {
      System_Object___ctor_23dfe5c(lVar4,0);
      puVar6 = (undefined8 *)(lVar4 + 0x10);
      *puVar6 = uVar5;
      FUN_012d0d74(puVar6,uVar5);
      lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      puVar1 = PTR_DAT_0580e4a0;
      if (lVar2 != 0) {
        DG_Tweening_Core_DOGetter_Vector3____ctor_156d7c4
                  (lVar2,lVar4,*(undefined8 *)PTR_DAT_057bf3a0,0);
        lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
        puVar1 = PTR_DAT_057815e0;
        if (lVar3 != 0) {
          DG_Tweening_Core_DOSetter_Vector3____ctor_156ebf4
                    (lVar3,lVar4,*(undefined8 *)PTR_DAT_0579f818,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_0130472c();
          }
          puVar1 = PTR_DAT_05762af8;
          lVar4 = DG_Tweening_DOTween__To_1ed8974(uVar7,param_2,param_3,uVar8,lVar2,lVar3);
          if ((lVar4 != 0) && (*(char *)(lVar4 + 0xe8) != '\0')) {
            *(undefined1 *)(lVar4 + 0x14c) = 0;
          }
          DG_Tweening_TweenSettingsExtensions__SetTarget_object__2451274
                    (lVar4,*puVar6,*(undefined8 *)puVar1);
          return lVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
LAB_0356d228:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

