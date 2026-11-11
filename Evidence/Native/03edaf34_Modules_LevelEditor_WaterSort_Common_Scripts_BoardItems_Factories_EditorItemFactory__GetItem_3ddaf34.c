/* IL2CPP: Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetItem
Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o* Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this, int32_t itemType, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o localPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.LevelEditor.WaterSort.Common.Scripts.BoardItems.Factories.EditorItemFactory$$GetItem
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem_o*
   Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem
   (Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory_o* __this,
   int32_t itemType, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent,
   UnityEngine_Vector3_o localPosition, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_Factories_EditorItemFactory__GetItem_3ddaf34
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((bRam0000000005c37e3e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578db30);
    FUN_012d0dc8(PTR_DAT_057ab048);
                    /* try { // try from 03edaf8c to 03fdb04b has its CatchHandler @ 03edaf8c
                       catch() { ... } // from try @ 03edaf8c with catch @ 03edaf8c
                       catch() { ... } // from try @ 03edb13c with catch @ 03edaf8c
                       catch() { ... } // from try @ 03edb18c with catch @ 03edaf8c
                       catch() { ... } // from try @ 03edb1f0 with catch @ 03edaf8c
                       catch() { ... } // from try @ 03edb258 with catch @ 03edaf8c */
    FUN_012d0dc8(PTR_DAT_0579ef98);
    FUN_012d0dc8(PTR_DAT_0581af90);
    bRam0000000005c37e3e = 1;
  }
  if ((*(long *)(param_4 + 0x18) != 0) &&
     (plVar2 = (long *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item_36d1354
                                 (*(long *)(param_4 + 0x18),param_5,*(undefined8 *)PTR_DAT_057ab048)
     , puVar1 = PTR_DAT_0578db30, plVar2 != (long *)0x0)) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0581af90) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_03edb028;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0131971c(plVar2,*(long *)PTR_DAT_0581af90,1);
LAB_03edb028:
    lVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
                    /* try { // try from 03edb04c to 03fdb04f has its CatchHandler @ 03edb1c0 */
    if ((lVar4 != 0) &&
       (System_Action_object____ctor_1647468(lVar4,param_4,*(undefined8 *)PTR_DAT_0579ef98,0),
       lVar5 != 0)) {
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__add_OnRecycled_37ae064
                (lVar5,lVar4,0);
                    /* try { // try from 03edb080 to 03fdb083 has its CatchHandler @ 03edb1b8 */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__Spawn_37ae228(lVar5,0);
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetParent_37ac850
                (lVar5,param_6,0);
                    /* try { // try from 03edb094 to 03fdb09b has its CatchHandler @ 03edb1b4 */
      Modules_LevelEditor_WaterSort_Common_Scripts_BoardItems_EditorAItem__SetLocalPosition_37acac8
                (param_1,param_2,param_3,lVar5,0);
                    /* try { // try from 03edb0ac to 03fdb0af has its CatchHandler @ 03edb1b0 */
                    /* try { // try from 03edb0c0 to 03fdb0c7 has its CatchHandler @ 03edb1ac */
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

