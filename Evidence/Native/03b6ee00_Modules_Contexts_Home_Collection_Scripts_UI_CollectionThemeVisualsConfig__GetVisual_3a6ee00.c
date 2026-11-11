/* IL2CPP: Modules.Contexts.Home.Collection.Scripts.UI.CollectionThemeVisualsConfig$$GetVisual
Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisual_o* Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisualsConfig__GetVisual (Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisualsConfig_o* __this, System_String_o* themeId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.Collection.Scripts.UI.CollectionThemeVisualsConfig$$GetVisual
   Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisual_o*
   Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisualsConfig__GetVisual
   (Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisualsConfig_o* __this,
   System_String_o* themeId, const MethodInfo* method); */

void Modules_Contexts_Home_Collection_Scripts_UI_CollectionThemeVisualsConfig__GetVisual_3a6ee00
               (long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  if ((bRam0000000005c35a63 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057885d8);
    FUN_012d0dc8(PTR_DAT_057f7370);
    FUN_012d0dc8(PTR_DAT_057a1338);
    FUN_012d0dc8(PTR_DAT_057fabb0);
    FUN_012d0dc8(PTR_DAT_057e8820);
    FUN_012d0dc8(PTR_DAT_05789050);
    FUN_012d0dc8(PTR_DAT_0575fee8);
    bRam0000000005c35a63 = 1;
  }
  puVar1 = PTR_DAT_0575fee8;
  plVar5 = (long *)(param_1 + 0x20);
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(long *)PTR_DAT_0575fee8;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_057a1338;
    lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    if (lVar7 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar7 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar7 == 0) goto LAB_03b6efe4;
      System_Func_object__object____ctor_33820ac(lVar7,uVar8,*(undefined8 *)PTR_DAT_057e8820,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar4 = lVar7;
      FUN_012d0d74(plVar4,lVar7);
      lVar3 = *(long *)puVar1;
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_0130472c();
      lVar3 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_057fabb0;
    lVar9 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar9 == 0) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
        lVar3 = *(long *)puVar1;
      }
      uVar8 = **(undefined8 **)(lVar3 + 0xb8);
      lVar9 = thunk_FUN_01320e48(*(undefined8 *)puVar2);
      if (lVar9 == 0) {
LAB_03b6efe4:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      System_Func_object__object____ctor_33820ac(lVar9,uVar8,*(undefined8 *)PTR_DAT_05789050,0);
      plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar4 = lVar9;
      FUN_012d0d74(plVar4,lVar9);
    }
    lVar3 = System_Linq_Enumerable__ToDictionary_object__object__object__242ce50
                      (uVar6,lVar7,lVar9,*(undefined8 *)PTR_DAT_057f7370);
    *plVar5 = lVar3;
    FUN_012d0d74(plVar5,lVar3);
    lVar3 = *plVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x0281cb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)PTR_DAT_057885d8 + 0x38) + 8))(lVar3,param_2,0);
  return;
}

