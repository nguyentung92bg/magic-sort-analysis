/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$OnFrameSelected
void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnFrameSelected (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Profile.Scripts.ProfileSpriteSelectionContainer$$OnFrameSelected
   void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnFrameSelected
   (Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer_o* __this,
   System_String_o* id, const MethodInfo* method); */

void Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__OnFrameSelected_298d5c4
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  
  puVar1 = PTR_DAT_0576aae0;
  if ((bRam0000000005c2d7e1 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057a1e60);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_057636d0);
    bRam0000000005c2d7e1 = 1;
  }
  if (((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
      (lVar2 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar2 == 0)) ||
     (plVar3 = (long *)Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                                 (lVar2,*(undefined8 *)PTR_DAT_057a1e60), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  lVar2 = *plVar3;
  uVar5 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_057636d0) {
        puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0x10) * 0x10 + 0x138);
        goto LAB_02a8d6a0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_0131971c(plVar3,*(long *)PTR_DAT_057636d0,0x10);
LAB_02a8d6a0:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar5 & 1) == 0) {
    Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__SelectExceptFacebook_298d7b8
              (param_1,param_2);
  }
  else {
    Modules_Contexts_Home_UI_Profile_Scripts_ProfileSpriteSelectionContainer__SelectWithNoRule_298d708
              (param_1,param_2);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02a8d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),param_2,*(undefined8 *)(lVar2 + 0x28))
    ;
    return;
  }
  return;
}

