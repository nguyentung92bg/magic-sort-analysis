/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkItem$$OnRecycle
void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__OnRecycle (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkItem$$OnRecycle
   void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__OnRecycle
   (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem_o* __this, const
   MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__OnRecycle_37adb08
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((bRam0000000005c33e3d & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
    FUN_012d0dc8(PTR_DAT_057b4de8);
    bRam0000000005c33e3d = 1;
  }
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850(param_1,0);
  if (cRam0000000005c230a9 == '\0') {
    FUN_012d0dc8(PTR_DAT_05805c10);
    cRam0000000005c230a9 = '\x01';
  }
  lVar5 = *(long *)(*(long *)PTR_DAT_05805c10 + 0xb8);
  Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalScale_37ac904
            (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
             *(undefined4 *)(lVar5 + 0x14),param_1);
  puVar4 = PTR_DAT_0577f3c8;
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar6 = (long *)(*(long *)(param_1 + 0x30) + 0x38);
    lVar7 = *plVar6;
    lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577f3c8);
    if (lVar5 != 0) {
      System_Action_int____ctor_1646aac(lVar5,param_1,*(undefined8 *)PTR_DAT_057b4de8,0);
      lVar5 = System_Delegate__Remove_23e3b70(lVar7,lVar5,0);
      if (lVar5 == 0) {
        lVar7 = 0;
      }
      else {
        uVar8 = *(undefined8 *)puVar4;
        lVar7 = thunk_FUN_01320d5c(lVar5,uVar8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012d1288(lVar5,uVar8);
        }
      }
      *plVar6 = lVar7;
                    /* try { // try from 038adc1c to 039adcb3 has its CatchHandler @ 038adc1c
                       catch() { ... } // from try @ 038adc1c with catch @ 038adc1c
                       catch() { ... } // from try @ 038adcd8 with catch @ 038adc1c
                       catch() { ... } // from try @ 038add18 with catch @ 038adc1c
                       catch() { ... } // from try @ 038adda0 with catch @ 038adc1c
                       catch() { ... } // from try @ 038addec with catch @ 038adc1c */
      if (iRam0000000005c3d478 != 0) {
        puVar1 = (ulong *)(((ulong)plVar6 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar6 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

