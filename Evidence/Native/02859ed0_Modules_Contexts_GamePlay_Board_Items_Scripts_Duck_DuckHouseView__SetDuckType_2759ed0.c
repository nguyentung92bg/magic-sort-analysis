/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$SetDuckType
void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetDuckType (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, int32_t duckType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Board.Items.Scripts.Duck.DuckHouseView$$SetDuckType
   void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetDuckType
   (Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView_o* __this, int32_t duckType,
   const MethodInfo* method); */

void Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseView__SetDuckType_2759ed0
               (long param_1,undefined4 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseCompleteView__SetDuckType_2756bf0();
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar1 = Modules_Contexts_GamePlay_Board_Items_Scripts_Duck_DuckHouseColorConfig__TryGetDuckCoverConfig_2756a10
                        (*(long *)(param_1 + 0x20),param_2,&uStack_40);
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(param_1 + 0x78),uStack_38,0);
        lVar2 = *(long *)(param_1 + 0x80);
        if (lVar2 != 0) {
          if (*(int *)(lVar2 + 0x18) == 0) {
LAB_02859f98:
                    /* WARNING: Subroutine does not return */
            FUN_012d0ef8();
          }
          if (*(long *)(lVar2 + 0x20) != 0) {
            UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(lVar2 + 0x20),uStack_30,0);
            lVar2 = *(long *)(param_1 + 0x80);
            if (lVar2 != 0) {
              if (*(uint *)(lVar2 + 0x18) < 2) goto LAB_02859f98;
              if (*(long *)(lVar2 + 0x28) != 0) {
                UnityEngine_SpriteRenderer__set_sprite_4095b64(*(long *)(lVar2 + 0x28),uStack_30,0);
                if (*(long *)(param_1 + 0x88) != 0) {
                  UnityEngine_SpriteRenderer__set_sprite_4095b64
                            (*(long *)(param_1 + 0x88),uStack_28,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

