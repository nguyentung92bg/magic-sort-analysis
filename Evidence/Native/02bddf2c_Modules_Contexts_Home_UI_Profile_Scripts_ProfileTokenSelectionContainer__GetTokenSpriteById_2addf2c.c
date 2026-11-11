/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$GetTokenSpriteById
Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSprite_o* Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetTokenSpriteById (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this, System_String_o* tokenId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.UI.Profile.Scripts.ProfileTokenSelectionContainer$$GetTokenSpriteById
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSprite_o*
   Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetTokenSpriteById
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer_o* __this,
   System_String_o* tokenId, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_UI_Profile_Scripts_ProfileTokenSelectionContainer__GetTokenSpriteById_2addf2c
          (long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_057e8678;
  if ((bRam0000000005c2eaff & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578aaf0);
    FUN_012d0dc8(PTR_DAT_05799138);
    FUN_012d0dc8(PTR_DAT_0580f778);
    FUN_012d0dc8(PTR_DAT_057e8678);
    bRam0000000005c2eaff = 1;
  }
  lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    System_Object___ctor_23dfe5c(lVar3,0);
    plVar8 = (long *)(lVar3 + 0x10);
    *plVar8 = param_2;
    FUN_012d0d74(plVar8,param_2);
    if (*plVar8 == 0) {
      return 0;
    }
    lVar6 = *(long *)(param_1 + 0x38);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05799138);
    if ((lVar4 != 0) &&
       (System_Predicate_object____ctor_30fcf30(lVar4,lVar3,*(undefined8 *)PTR_DAT_0580f778,0),
       lVar6 != 0)) {
      lVar3 = *(long *)PTR_DAT_0578aaf0;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentNullException_2693954(8);
      }
      if (0 < *(int *)(lVar6 + 0x18)) {
        uVar7 = 0;
        do {
          lVar5 = *(long *)(lVar6 + 0x10);
          if (lVar5 == 0) goto LAB_022fd1e4;
          if (*(uint *)(lVar5 + 0x18) <= uVar7) {
LAB_022fd1e8:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          if (lVar4 == 0) {
LAB_022fd1e4:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          uVar2 = (**(code **)(*(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0xd8) + 8))
                            (lVar4,*(undefined8 *)(lVar5 + uVar7 * 8 + 0x20));
          if ((uVar2 & 1) != 0) {
            lVar3 = *(long *)(lVar6 + 0x10);
            if (lVar3 != 0) {
              if ((uint)uVar7 < *(uint *)(lVar3 + 0x18)) {
                return *(undefined8 *)(lVar3 + uVar7 * 8 + 0x20);
              }
              goto LAB_022fd1e8;
            }
            goto LAB_022fd1e4;
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)*(int *)(lVar6 + 0x18));
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

