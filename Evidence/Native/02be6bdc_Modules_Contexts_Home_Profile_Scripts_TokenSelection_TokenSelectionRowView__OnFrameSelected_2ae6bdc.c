/* IL2CPP: Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$OnFrameSelected
void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__OnFrameSelected (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this, System_String_o* id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.Home.Profile.Scripts.TokenSelection.TokenSelectionRowView$$OnFrameSelected
   void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__OnFrameSelected
   (Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView_o* __this,
   System_String_o* id, const MethodInfo* method); */

void Modules_Contexts_Home_Profile_Scripts_TokenSelection_TokenSelectionRowView__OnFrameSelected_2ae6bdc
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_057ffde8;
  if ((bRam0000000005c2eb54 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0576c898);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05793c38);
    FUN_012d0dc8(PTR_DAT_0578e8e0);
    FUN_012d0dc8(PTR_DAT_057ffde8);
    bRam0000000005c2eb54 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_05793c38;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    FUN_012d0d74((undefined8 *)(lVar2 + 0x10),param_2);
    lVar5 = *(long *)(param_1 + 0x30);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if ((lVar3 != 0) &&
       (System_Predicate_object____ctor_30fcf30(lVar3,lVar2,*(undefined8 *)PTR_DAT_0578e8e0,0),
       puVar1 = PTR_DAT_0576c200, lVar5 != 0)) {
      lVar2 = System_Collections_Generic_List_object___Find_21fd130
                        (lVar5,lVar3,*(undefined8 *)PTR_DAT_0576c898);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_0130472c(*(long *)puVar1);
      }
      uVar4 = UnityEngine_Object__op_Inequality_408e110(lVar2,0,0);
      if (((uVar4 & 1) == 0) || (lVar3 = *(long *)(param_1 + 0x38), lVar3 == 0)) {
        return;
      }
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02be6d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar2 + 0x48),
                   *(undefined8 *)(lVar3 + 0x28));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

