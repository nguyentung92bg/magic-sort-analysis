/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$RecycleCurrencyViews
void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__RecycleCurrencyViews (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Daily.Scripts.UI.DailyProgressBarController$$RecycleCurrencyViews
   void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__RecycleCurrencyViews
   (Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController_o* __this, const MethodInfo*
   method); */

void Modules_Contexts_Home_Daily_Scripts_UI_DailyProgressBarController__RecycleCurrencyViews_3e1e8d0
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  puVar6 = PTR_DAT_057c7fe0;
  if ((bRam0000000005c3810e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057b7d58);
    FUN_012d0dc8(PTR_DAT_05780dd8);
    FUN_012d0dc8(PTR_DAT_057d2770);
    FUN_012d0dc8(PTR_DAT_057f4e60);
    FUN_012d0dc8(PTR_DAT_057c7fe0);
    bRam0000000005c3810e = 1;
  }
  lVar7 = *(long *)puVar6;
  lVar10 = *(long *)(param_1 + 0x48);
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_0130472c();
    lVar7 = *(long *)puVar6;
  }
  puVar2 = PTR_DAT_057b7d58;
  lVar11 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar7 = *(long *)puVar6;
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    lVar11 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
    if (lVar11 == 0) goto LAB_03f1ea1c;
    System_Action_object____ctor_1647468(lVar11,uVar12,*(undefined8 *)PTR_DAT_057f4e60,0);
    plVar8 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10);
    *plVar8 = lVar11;
    FUN_012d0d74(plVar8,lVar11);
  }
  if (lVar10 != 0) {
    System_Collections_Generic_List_object___ForEach_21fd504
              (lVar10,lVar11,*(undefined8 *)PTR_DAT_057d2770);
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (iVar1 < 1) {
        return;
      }
      puVar9 = *(undefined8 **)(lVar7 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        thunk_FUN_0136d790(PTR_DAT_057c1ad0,0,iVar1,0);
        uVar5 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar12 = thunk_FUN_0136d790(PTR_DAT_057b5798);
        System_ArgumentNullException___ctor_211d594(uVar5,uVar12,0);
      }
      else {
        if (iVar1 < 0) {
          thunk_FUN_0136d790(PTR_DAT_0577cad0,0,iVar1,0);
          uVar5 = thunk_FUN_01320e48();
          FUN_0103b554();
          puVar6 = PTR_DAT_057a0520;
        }
        else {
          iVar3 = FUN_0133d04c(puVar9,0);
          if (iVar3 < 1) {
            iVar4 = System_Array__get_Length_269b654(puVar9);
            if (-iVar3 <= iVar4 - iVar1) {
              iVar4 = il2cpp_array_element_size(*puVar9);
              (*(code *)PTR_memset_057579a8)
                        ((long)puVar9 + (long)iVar4 * (long)-iVar3 + 0x20,0,(long)(iVar4 * iVar1));
              return;
            }
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar5 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar6 = PTR_DAT_057d40f8;
          }
          else {
            thunk_FUN_0136d790(PTR_DAT_0577cad0);
            uVar5 = thunk_FUN_01320e48();
            FUN_0103b554();
            puVar6 = PTR_DAT_057f4438;
          }
        }
        uVar12 = thunk_FUN_0136d790(puVar6);
        System_IndexOutOfRangeException___ctor_26c73a0(uVar5,uVar12,0);
      }
      uVar12 = thunk_FUN_0136d790(PTR_DAT_057b9a70);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar5,uVar12);
    }
  }
LAB_03f1ea1c:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

