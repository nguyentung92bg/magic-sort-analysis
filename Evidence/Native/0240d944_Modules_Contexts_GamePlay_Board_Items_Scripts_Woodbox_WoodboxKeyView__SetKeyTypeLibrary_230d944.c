/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$SetKeyTypeLibrary
void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetKeyTypeLibrary (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, int32_t woodboxKeyType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Woodbox.WoodboxKeyView$$SetKeyTypeLibrary
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetKeyTypeLibrary
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView_o* __this, int32_t
   woodboxKeyType, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Woodbox_WoodboxKeyView__SetKeyTypeLibrary_230d944
               (long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR_DAT_0576c200;
                    /* try { // try from 0240d948 to 0250d953 has its CatchHandler @ 0240d5e0 */
  lVar7 = *(long *)(param_1 + 0x50);
  if (lVar7 != 0) {
    lVar5 = *(long *)(lVar7 + 0x20);
                    /* try { // try from 0240d954 to 0250d95b has its CatchHandler @ 0240d968 */
                    /* catch() { ... } // from try @ 0240d8e0 with catch @ 0240d95c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0240d920 with catch @ 0240d968
                       catch(type#2 @ 00000000) { ... } // from try @ 0240d954 with catch @ 0240d968
                        */
    switch(param_2) {
    case 1:
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0240d9fc;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x18) + 0xb8);
      break;
    case 2:
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0240d9fc;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x18) + 200);
      break;
    default:
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0240d9fc;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x18) + 0xa8);
      break;
    case 4:
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0240d9fc;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x18) + 0xa0);
      break;
    case 5:
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0240d9fc;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x18) + 0xb0);
      break;
    case 6:
      if (*(long *)(lVar7 + 0x18) == 0) goto LAB_0240d9fc;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x18) + 0xc0);
    }
    if (lVar5 != 0) {
      uVar6 = *puVar1;
      if ((bRam0000000005c27d52 & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0576c200,uVar6,0);
        bRam0000000005c27d52 = 1;
      }
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_0130472c();
      }
      uVar4 = UnityEngine_Object__op_Inequality_408e110(uVar9,uVar6,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      *(undefined8 *)(lVar5 + 0x20) = uVar6;
      FUN_012d0d74((undefined8 *)(lVar5 + 0x20),uVar6);
      UnityEngine_U2D_Animation_SpriteLibrary__CacheOverrides_1e38b2c(lVar5);
      puVar3 = PTR_DAT_0575abf8;
      if ((bRam0000000005c27d5d & 1) == 0) {
        FUN_012d0dc8(PTR_DAT_0575abf8);
        bRam0000000005c27d5d = 1;
      }
      lVar7 = UnityEngine_Component__GetComponentsInChildren_object__2720890
                        (lVar5,*(undefined8 *)puVar3);
      if (lVar7 == 0) {
LAB_01f395e4:
                    /* WARNING: Subroutine does not return */
        FUN_012d0ef0();
      }
      uVar2 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar2) {
        uVar8 = 0;
        do {
          if (uVar2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          if (*(long *)(lVar7 + (long)(int)uVar8 * 8 + 0x20) == 0) goto LAB_01f395e4;
          UnityEngine_U2D_Animation_SpriteResolver__ResolveSpriteToSpriteRenderer_1e3a620();
          uVar2 = *(uint *)(lVar7 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar2);
      }
      return;
    }
  }
LAB_0240d9fc:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

