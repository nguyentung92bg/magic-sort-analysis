/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemsSpriteLibrary$$GetSprite
UnityEngine_Sprite_o* Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__GetSprite (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary_o* __this, int32_t setId, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.MergeMiniGame.Scripts.Board.MergeItemsSpriteLibrary$$GetSprite
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__GetSprite
   (Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary_o* __this, int32_t
   setId, int32_t level, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__GetSprite_410d584
          (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_48;
  long lStack_38;
  
  if ((bRam0000000005c3ac06 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057dba78);
    FUN_012d0dc8(PTR_DAT_0576c200);
    FUN_012d0dc8(PTR_DAT_05815980);
    bRam0000000005c3ac06 = 1;
  }
  puVar1 = PTR_DAT_05815980;
  lStack_38 = 0;
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar2 = Modules_Contexts_Home_MergeMiniGame_Scripts_Board_MergeItemsSpriteLibrary__BuildLookup_411351c
                      (param_1);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    FUN_012d0d74((long *)(param_1 + 0x20),uVar2);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  uStack_48 = 0;
  System_ValueTuple_int__int____ctor_2b8bfd0(&uStack_48,param_2,param_3,*(undefined8 *)puVar1);
  if (lVar4 != 0) {
                    /* try { // try from 0420d630 to 0430d637 has its CatchHandler @ 0420d690 */
    uVar3 = System_Collections_Generic_Dictionary_ValueTuple_int__int___object___TryGetValue_3f5da04
                      (lVar4,uStack_48,&lStack_38,*(undefined8 *)PTR_DAT_057dba78);
    lVar4 = lStack_38;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    else {
                    /* try { // try from 0420d64c to 0430d65b has its CatchHandler @ 0420d68c */
                    /* try { // try from 0420d65c to 0430d67f has its CatchHandler @ 0420d4d8 */
      if (*(int *)(*(long *)PTR_DAT_0576c200 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar3 = UnityEngine_Object__op_Inequality_408e110(lVar4,0,0);
      uVar2 = 0;
                    /* try { // try from 0420d680 to 0430d683 has its CatchHandler @ 0420d688 */
      if ((uVar3 & 1) != 0) {
                    /* try { // try from 0420d684 to 0430d6a7 has its CatchHandler @ 0420d4d8 */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0420d680 with catch @ 0420d688
                        */
        if (lStack_38 == 0) goto LAB_0420d6b4;
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0420d64c with catch @ 0420d68c
                        */
                    /* catch(type#1 @ 054cbd58) { ... } // from try @ 0420d630 with catch @ 0420d690
                        */
        uVar2 = UnityEngine_SpriteRenderer__get_sprite_4095b28(lStack_38,0);
      }
    }
                    /* try { // try from 0420d6a8 to 0430d6ab has its CatchHandler @ 0420d6d4 */
                    /* try { // try from 0420d6ac to 0430d6e3 has its CatchHandler @ 0420d4d8 */
    return uVar2;
  }
LAB_0420d6b4:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

