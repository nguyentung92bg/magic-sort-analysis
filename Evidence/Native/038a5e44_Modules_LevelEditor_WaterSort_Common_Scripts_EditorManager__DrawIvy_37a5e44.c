/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawIvy
void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawIvy (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o* colorAndColorId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x038a8420) */
/* WARNING: Removing unreachable block (ram,0x038a842c) */
/* WARNING: Removing unreachable block (ram,0x038a8434) */
/* WARNING: Removing unreachable block (ram,0x038a843c) */
/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.EditorManager$$DrawIvy
   void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawIvy
   (Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager_o* __this, UnityEngine_Vector2_o
   position, Modules_Contexts_GamePlay_BoardItems_Scripts_Common_ColorNS_ColorAndColorId_o*
   colorAndColorId, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_Common_Scripts_EditorManager__DrawIvy_37a5e44
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  if ((bRam0000000005c33e16 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057afe68);
                    /* try { // try from 038a5e7c to 039a5e7f has its CatchHandler @ 038a5fa4 */
    FUN_012d0dc8(PTR_DAT_057b8520);
                    /* try { // try from 038a5e84 to 039a5e8b has its CatchHandler @ 038a5fa0 */
    FUN_012d0dc8(PTR_DAT_05814b68);
    FUN_012d0dc8(PTR_DAT_057f81b8);
                    /* try { // try from 038a5e9c to 039a5e9f has its CatchHandler @ 038a5f9c */
    bRam0000000005c33e16 = 1;
  }
  puVar1 = PTR_DAT_057afe68;
                    /* try { // try from 038a5ea4 to 039a5eaf has its CatchHandler @ 038a5f98 */
  if (param_4 == 0) {
                    /* try { // try from 038a5ed8 to 039a5edf has its CatchHandler @ 038a5f84 */
                    /* try { // try from 038a5ee8 to 039a5f13 has its CatchHandler @ 038a5f88 */
    if (*(int *)(*(long *)PTR_DAT_057b8520 + 0xe0) == 0) {
      thunk_FUN_0130472c();
    }
    lVar2 = Modules_Infrastructure_Common_Scripts_SignalNS_SignalBus__Get_object__268f620
                      (*(undefined8 *)puVar1);
    if (lVar2 != 0) {
                    /* try { // try from 038a5f14 to 039a5f1f has its CatchHandler @ 038a5f80 */
      if (*(long *)(lVar2 + 0x10) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0343d430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_05814b68 + 0x20) + 0xc0) + 0x20) +
                  8))(*(long *)(lVar2 + 0x10),*(undefined8 *)PTR_DAT_057f81b8);
      return;
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x68) = 1;
    if (*(long *)(param_3 + 0x48) != 0) {
      uVar3 = Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorBottleCollection__GetIntersectedBottle_37b03d8
                        (param_1,param_2,*(long *)(param_3 + 0x48),&stack0xffffffffffffffe8);
      if ((uVar3 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

