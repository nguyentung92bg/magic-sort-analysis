/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$Initialize
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__Initialize (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, System_Collections_Generic_List_ProfileSprite__o* profileSprites, Modules_Contexts_Home_UI_Profile_Scripts_ProfileSprite_o* faceBookProfileSprite, System_String_o* activeSpriteId, bool selectFrame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$Initialize
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__Initialize
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this,
   System_Collections_Generic_List_ProfileSprite__o* profileSprites,
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileSprite_o* faceBookProfileSprite, System_String_o*
   activeSpriteId, bool selectFrame, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__Initialize_2987824
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  
  if ((bRam0000000005c2d7e4 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    FUN_012d0dc8(PTR_DAT_057884f0);
    bRam0000000005c2d7e4 = 1;
  }
  uVar3 = Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__ValidateSpriteSizes_298d8d0
                    (param_1,param_2);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) == 0) ||
      (lVar4 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar4 == 0)) ||
     (plVar5 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar4,*(undefined8 *)PTR_DAT_057a1e60), plVar5 == (long *)0x0))
  goto LAB_02a879e0;
  lVar4 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar4 + 0x12a);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 0x10) * 0x10 + 0x138);
        goto LAB_02a87940;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar3 != 0);
  }
  puVar6 = (undefined8 *)FUN_0131971c(plVar5,*(long *)PTR_DAT_057636d0,0x10);
LAB_02a87940:
  uVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__InitializeSprites_298d938
            (param_1,param_2,param_3,uVar2 & 1);
  puVar1 = PTR_DAT_057884f0;
  if ((param_5 & 1) == 0) goto LAB_02a879c8;
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_02a879e0;
    uVar3 = System_String__Equals_1ecf130
                      (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),param_4,0);
    if ((uVar3 & 1) == 0) goto LAB_02a87990;
LAB_02a879a0:
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar4 = System_Collections_Generic_List_object___get_Item_21fc76c
                          (*(long *)(param_1 + 0x20),0,*(undefined8 *)puVar1), lVar4 == 0)) {
LAB_02a879e0:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    param_4 = *(undefined8 *)(lVar4 + 0x38);
  }
  else {
LAB_02a87990:
    uVar3 = System_String__IsNullOrEmpty_1ed04ac(param_4,0);
    if ((uVar3 & 1) != 0) goto LAB_02a879a0;
  }
  Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnFrameSelected_298d5c4
            (param_1,param_4);
LAB_02a879c8:
  puVar1 = PTR_DAT_0576c200;
  if ((bRam0000000005c2d7e7 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c200);
    bRam0000000005c2d7e7 = 1;
  }
  uVar7 = Modules_Contexts_Home_UI_Profile_Scripts_SocialProfilePhotoManager__LoadProfilePhoto_2adfca8
                    (0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_0130472c(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Inequality_408e110(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar4 != 0)) {
      if (pcRam0000000005c3a730 == (code *)0x0) {
        pcRam0000000005c3a730 = (code *)FUN_012d0d84(&UNK_043ef929);
      }
                    /* WARNING: Could not recover jumptable at 0x04195ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000005c3a730)(lVar4,uVar7);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  return;
}

