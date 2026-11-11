/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.OpenFileBrowserButton$$OnFilesSelected
void Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__OnFilesSelected (Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton_o* __this, System_String_array* filePaths, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.OpenFileBrowserButton$$OnFilesSelected
   void Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__OnFilesSelected
   (Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton_o* __this, System_String_array*
   filePaths, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_OpenFileBrowserButton__OnFilesSelected_379fa90
               (undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((bRam0000000005c33dd2 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_05783010);
    FUN_012d0dc8(PTR_DAT_0576aae0);
    FUN_012d0dc8(PTR_DAT_05807f60);
    bRam0000000005c33dd2 = 1;
  }
  puVar1 = PTR_DAT_05807f60;
  if (param_2 != 0) {
    uVar5 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
    if (0 < (int)*(ulong *)(param_2 + 0x18)) {
      uVar7 = 0;
      do {
        if (uVar5 <= uVar7) goto LAB_0389fb84;
        uVar6 = *(undefined8 *)(param_2 + 0x20 + uVar7 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        UnityEngine_Debug__Log_4087f08(uVar6,0);
        uVar5 = (ulong)*(uint *)(param_2 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)*(uint *)(param_2 + 0x18));
    }
    if ((int)uVar5 == 0) {
LAB_0389fb84:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef8();
    }
    if ((**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) != 0) &&
       (lVar3 = *(long *)(**(long **)(*(long *)PTR_DAT_0576aae0 + 0xb8) + 0x18), lVar3 != 0)) {
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = Modules_Infrastructure_DI_Injection_Container__GetInstance_object__2721d78
                        (lVar3,*(undefined8 *)PTR_DAT_05783010);
      puVar1 = PTR_DAT_058007e8;
      if (lVar3 != 0) {
        if ((bRam0000000005c33e1d & 1) == 0) {
          FUN_012d0dc8(PTR_DAT_058007e8);
          FUN_012d0dc8(PTR_DAT_057afe68);
          FUN_012d0dc8(PTR_DAT_057b8520);
          FUN_012d0dc8(PTR_DAT_05814b68);
          FUN_012d0dc8(PTR_DAT_057fcdb8);
          bRam0000000005c33e1d = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        if (cRam0000000005c33e8b == '\0') {
          FUN_012d0dc8(PTR_DAT_058007e8);
          cRam0000000005c33e8b = '\x01';
        }
        puVar2 = PTR_DAT_057b8520;
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_0130472c();
          lVar3 = *(long *)puVar1;
        }
        puVar1 = PTR_DAT_057afe68;
        puVar4 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
        *puVar4 = uVar6;
        FUN_012d0d74(puVar4,uVar6);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_0130472c();
        }
        lVar3 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                          (*(undefined8 *)puVar1);
        if (lVar3 != 0) {
          if (*(long *)(lVar3 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05814b68 + 0x20) + 0xc0) +
                                  0x20) + 8))
                      (*(long *)(lVar3 + 0x10),*(undefined8 *)PTR_DAT_057fcdb8);
            return;
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

