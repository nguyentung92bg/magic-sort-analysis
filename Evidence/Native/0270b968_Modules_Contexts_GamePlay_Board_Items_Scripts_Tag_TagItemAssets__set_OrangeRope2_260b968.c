/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItemAssets$$set_OrangeRope2
void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__set_OrangeRope2 (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets_o* __this, UnityEngine_Sprite_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Tag.TagItemAssets$$set_OrangeRope2
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__set_OrangeRope2
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets_o* __this, UnityEngine_Sprite_o*
   value, const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Tag_TagItemAssets__set_OrangeRope2_260b968
               (long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x70);
  *puVar4 = param_2;
                    /* try { // try from 0270b96c to 0280b983 has its CatchHandler @ 0270b9f0 */
  if (iRam0000000005c3d478 != 0) {
    puVar1 = (ulong *)(((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x5c86b80);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar4 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

