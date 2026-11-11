/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelSaveButton$$OnFilesSelected
void Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__OnFilesSelected (Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton_o* __this, System_String_array* filePaths, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0358537c) */
/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.LevelSaveButton$$OnFilesSelected
   void Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__OnFilesSelected
   (Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton_o* __this, System_String_array*
   filePaths, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_LevelSaveButton__OnFilesSelected_379f09c
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((bRam0000000005c33dce & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    FUN_012d0dc8(PTR_DAT_05808bd0);
    bRam0000000005c33dce = 1;
  }
  puVar1 = PTR_DAT_05807f60;
  if (param_2 != 0) {
    uVar7 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar11 = 0;
      do {
        if (uVar7 <= uVar11) goto LAB_0389f1e0;
        uVar10 = *(undefined8 *)(param_2 + 0x20 + uVar11 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        UnityEngine_Debug__Log_4087f08(uVar10,0);
        uVar7 = (ulong)*(uint *)(param_2 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    puVar1 = PTR_DAT_0576aae0;
    if ((int)uVar7 == 0) {
LAB_0389f1e0:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    lVar9 = *(long *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_05808bd0 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    uVar10 = System_IO_Path__GetFileNameWithoutExtension_35797fc(lVar9,0);
    if (((**(long **)(*(long *)puVar1 + 0xb8) != 0) &&
        (lVar6 = *(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18), lVar6 != 0)) &&
       (lVar6 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                          (lVar6,*(undefined8 *)PTR_DAT_05783010), lVar6 != 0)) {
      uVar10 = Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__GetLevelJsonAsString_379cdc8
                         (lVar6,uVar10);
      UnityEngine_GUIUtility__set_systemCopyBuffer_27df758(uVar10,0);
      if ((bRam0000000005c3279a & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_058165e8,uVar10,0);
        FUN_012d0dc8(PTR_DAT_05759ac8);
        bRam0000000005c3279a = 1;
      }
      if (lVar9 == 0) {
        thunk_FUN_0136d790(PTR_DAT_057c1ad0);
        uVar4 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar10 = thunk_FUN_0136d790(PTR_DAT_057f0c80);
        System_ArgumentNullException___ctor_211d594(uVar4,uVar10,0);
      }
      else {
        if (*(int *)(lVar9 + 0x10) != 0) {
          plVar2 = (long *)thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_05759ac8);
          puVar1 = PTR_DAT_058165e8;
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef0();
          }
          System_IO_StreamWriter___ctor_34776b0(plVar2,lVar9);
          (**(code **)(*plVar2 + 0x248))(plVar2,uVar10,*(undefined8 *)(*plVar2 + 0x250));
          lVar9 = *plVar2;
          uVar7 = (ulong)*(ushort *)(lVar9 + 0x12a);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar3 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_035852c0;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)puVar1,0);
LAB_035852c0:
          (*(code *)*puVar3)(plVar2,puVar3[1]);
          return;
        }
        thunk_FUN_0136d790(PTR_DAT_057a2cc8);
        uVar4 = thunk_FUN_01320e48();
        FUN_0103b554();
        uVar10 = thunk_FUN_0136d790(PTR_DAT_057780d8);
        uVar5 = thunk_FUN_0136d790(PTR_DAT_057f0c80);
        System_ArgumentException___ctor_211d60c(uVar4,uVar10,uVar5,0);
      }
      uVar10 = thunk_FUN_0136d790(PTR_DAT_05800be0);
                    /* WARNING: Subroutine does not return */
      FUN_012d0eb8(uVar4,uVar10);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

