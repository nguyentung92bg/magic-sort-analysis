/* IL2CPP: Modules.Contexts.Home.UI.Toolbar.Scripts.ToolbarConfig$$GetToolbarAssetTypeOfColor
Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarAssetType_o* Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarConfig__GetToolbarAssetTypeOfColor (Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarConfig_o* __this, int32_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.UI.Toolbar.Scripts.ToolbarConfig$$GetToolbarAssetTypeOfColor
   Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarAssetType_o*
   Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarConfig__GetToolbarAssetTypeOfColor
   (Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarConfig_o* __this, int32_t color, const
   MethodInfo* method); */

long Modules_Contexts_Home_UI_Toolbar_Scripts_ToolbarConfig__GetToolbarAssetTypeOfColor_2dcbbcc
               (long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000005c2fc84 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577a8d0);
    FUN_012d0dc8(PTR_DAT_057cf988);
    FUN_012d0dc8(PTR_DAT_05765840);
    FUN_012d0dc8(PTR_DAT_057f61f0);
    FUN_012d0dc8(PTR_DAT_05766128);
    bRam0000000005c2fc84 = 1;
  }
  puVar2 = PTR_DAT_057cf988;
  puVar1 = PTR_DAT_0577a8d0;
  uStack_40 = 0;
  lStack_38 = 0;
  uStack_48 = 0;
  lVar3 = *(long *)(param_1 + 0xc0);
  lVar6 = 0;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
      lVar6 = 0;
    }
    else {
      System_Collections_Generic_List_object___GetEnumerator_21fd5c8
                (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_057f61f0);
      do {
        uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_3ea89a0
                          (&uStack_48,*(undefined8 *)puVar2);
        if ((uVar4 & 1) == 0) {
          lVar6 = 0;
          iVar5 = 7;
          goto LAB_02ecbcac;
        }
        if (lStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d0ef0();
        }
      } while (*(int *)(lStack_38 + 0x10) != param_2);
      iVar5 = 6;
      lVar6 = lStack_38;
LAB_02ecbcac:
      System_Collections_Generic_List_Enumerator_object___Dispose_3ea899c
                (&uStack_48,*(undefined8 *)puVar1);
      if (iVar5 != 6) {
        lVar6 = 0;
      }
    }
  }
  return lVar6;
}

