/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetFrogItem
Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o* Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetFrogItem (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this, Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o pivotPosition, UnityEngine_Vector3_o viewOffset, Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting, System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t frogType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.BoardItems.Scripts.Generation.ItemFactory$$GetFrogItem
   Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem_o*
   Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetFrogItem
   (Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory_o* __this,
   Modules_Contexts_GamePlay_Board_Common_Scripts_ITransform_o* parent, UnityEngine_Vector3_o
   pivotPosition, UnityEngine_Vector3_o viewOffset,
   Modules_Infrastructure_UI_Common_Scripts_Sorting_o sorting,
   System_Collections_Generic_List_BottleItem__o* belongingBottles, int32_t frogType, const
   MethodInfo* method); */

long * Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetFrogItem_230380c
                 (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  byte bVar1;
  long *plVar2;
  
                    /* try { // try from 02403814 to 0250388b has its CatchHandler @ 0240388c */
  if ((bRam0000000005c2a62b & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580f5e0);
    bRam0000000005c2a62b = 1;
  }
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 02403814 with catch @ 0240388c
                       try { // try from 0240388c to 025038a3 has its CatchHandler @ 024037bc */
  plVar2 = (long *)Modules_Contexts_GamePlay_BoardItems_Scripts_Generation_ItemFactory__GetItem_2301d8c
                             (param_1,param_2,param_3,param_7,0x10,param_8);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 024038a4 to 025038bb has its CatchHandler @ 02403928 */
    bVar1 = *(byte *)(*(long *)PTR_DAT_0580f5e0 + 300);
                    /* try { // try from 024038bc to 02503917 has its CatchHandler @ 024037bc */
    if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0580f5e0)) {
      Modules_Contexts_GamePlay_Board_Items_Scripts_Frog_FrogItem__Prepare_2751ff8
                (param_4,param_5,param_6,plVar2,param_9,param_10,param_11,param_12,0);
      (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
                    /* try { // try from 02403918 to 02503927 has its CatchHandler @ 02403928 */
                    /* catch() { ... } // from try @ 024038a4 with catch @ 02403928
                       catch() { ... } // from try @ 02403918 with catch @ 02403928 */
      return plVar2;
    }
                    /* try { // try from 0240392c to 0250392f has its CatchHandler @ 02403938 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02403930 to 0250393b has its CatchHandler @ 024037bc */
    FUN_012d1288(plVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

