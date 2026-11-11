/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkItem$$Prepare
void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__Prepare (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o* belongingBottle, int32_t fireworkCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.Firework.EditorFireworkItem$$Prepare
   void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__Prepare
   (Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   localPosition, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Bottle_EditorBottleItem_o*
   belongingBottle, int32_t fireworkCount, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkItem__Prepare_37adc74
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  
                    /* try { // try from 038adcb4 to 039adcbb has its CatchHandler @ 038add84 */
  if ((bRam0000000005c33e3e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0577f3c8);
                    /* try { // try from 038adccc to 039adcd7 has its CatchHandler @ 038add80 */
    FUN_012d0dc8(PTR_DAT_057b4de8);
    bRam0000000005c33e3e = 1;
  }
                    /* try { // try from 038adcd8 to 039add13 has its CatchHandler @ 038adc1c */
  *(undefined8 *)(param_4 + 0x38) = param_8;
  FUN_012d0d74((undefined8 *)(param_4 + 0x38),param_8);
  if (*(long *)(param_4 + 0x30) != 0) {
    Modules_LevelEditor_WaterSort_Common_Scripts_Firework_EditorFireworkView__Prepare_37addbc
              (*(long *)(param_4 + 0x30),param_6,param_7,param_9);
                    /* try { // try from 038add14 to 039add17 has its CatchHandler @ 038add7c */
    Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
              (param_1,param_2,param_3,param_4);
                    /* try { // try from 038add18 to 039add9b has its CatchHandler @ 038adc1c */
    *(undefined4 *)(param_4 + 0x2c) = param_9;
    puVar4 = PTR_DAT_0577f3c8;
    if (*(long *)(param_4 + 0x30) != 0) {
      plVar8 = (long *)(*(long *)(param_4 + 0x30) + 0x38);
      lVar6 = *plVar8;
      lVar5 = thunk_FUN_01320e48(*(undefined8 *)PTR_DAT_0577f3c8);
      if (lVar5 != 0) {
        System_Action_int____ctor_1646aac(lVar5,param_4,*(undefined8 *)PTR_DAT_057b4de8,0);
        lVar5 = System_Delegate__Combine_23e3964(lVar6,lVar5,0);
        if (lVar5 == 0) {
          lVar6 = 0;
        }
        else {
          uVar7 = *(undefined8 *)puVar4;
          lVar6 = thunk_FUN_01320d5c(lVar5,uVar7);
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038add14 with catch @ 038add7c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038adccc with catch @ 038add80
                        */
          if (lVar6 == 0) {
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 038adcb4 with catch @ 038add84
                        */
                    /* WARNING: Subroutine does not return */
            FUN_012d1288(lVar5,uVar7);
          }
        }
        *plVar8 = lVar6;
                    /* try { // try from 038add9c to 039add9f has its CatchHandler @ 038addd4 */
                    /* try { // try from 038adda0 to 039adde3 has its CatchHandler @ 038adc1c */
        if (iRam0000000005c3d478 != 0) {
          puVar1 = (ulong *)(((ulong)plVar8 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar8 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

