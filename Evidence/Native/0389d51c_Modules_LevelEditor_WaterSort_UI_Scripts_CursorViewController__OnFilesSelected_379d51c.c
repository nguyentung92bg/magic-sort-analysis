/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CursorViewController$$OnFilesSelected
void Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__OnFilesSelected (Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController_o* __this, System_String_array* filePaths, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.CursorViewController$$OnFilesSelected
   void Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__OnFilesSelected
   (Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController_o* __this, System_String_array*
   filePaths, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_CursorViewController__OnFilesSelected_379d51c
               (long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((bRam0000000005c33dbe & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f1ab0);
    FUN_012d0dc8(PTR_DAT_05805678);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_057d6d60);
    bRam0000000005c33dbe = 1;
  }
  puVar1 = PTR_DAT_05807f60;
  if (param_2 != 0) {
    uVar6 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar9 = 0;
      do {
        if (uVar6 <= uVar9) goto LAB_0389d714;
        uVar8 = *(undefined8 *)(param_2 + 0x20 + uVar9 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        UnityEngine_Debug__Log_4087f08(uVar8,0);
        uVar6 = (ulong)*(uint *)(param_2 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    if ((int)uVar6 == 0) {
LAB_0389d714:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = System_IO_File__Exists_3484a00(uVar8,0);
    if ((uVar6 & 1) == 0) {
      return;
    }
    plVar3 = (long *)System_IO_File__OpenRead_3484dac(uVar8,0);
    puVar2 = PTR_DAT_057f1ab0;
    puVar1 = PTR_DAT_057d6d60;
    if (plVar3 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      uVar8 = FUN_012d0e38(*(undefined8 *)puVar2,uVar8);
      uVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      (**(code **)(*plVar3 + 0x358))(plVar3,uVar8,0,uVar4,*(undefined8 *)(*plVar3 + 0x360));
      (**(code **)(*plVar3 + 0x278))(plVar3,*(undefined8 *)(*plVar3 + 0x280));
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
      if (lVar5 != 0) {
        UnityEngine_Texture2D___ctor_407c098(lVar5,1,1,0);
        UnityEngine_ImageConversion__LoadImage_3b01ef0(lVar5,uVar8,0);
        plVar7 = (long *)(param_1 + 0x18);
        *plVar7 = lVar5;
        FUN_012d0d74(plVar7,lVar5);
        plVar3 = (long *)*plVar7;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
          lVar5 = *plVar7;
          if (pcRam0000000005c34600 == (code *)0x0) {
            pcRam0000000005c34600 = (code *)FUN_012d0d84(&UNK_043b3251,0,0);
          }
          (*pcRam0000000005c34600)(lVar5,&stack0xffffffffffffffd8,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

